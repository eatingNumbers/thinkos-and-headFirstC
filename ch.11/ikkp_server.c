#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>

void error(char *msg) {
        fprintf(stderr, "%s: %s\n", msg, strerror(errno));
            exit(1);
}

int open_listener_socket() {
    int s = socket(PF_INET, SOCK_STREAM, 0);
    if (s == -1)
        error("Can't open socket");

    return s;
}

void bind_to_port(int socket, int port) {
    struct sockaddr_in name;
    name.sin_family = PF_INET;
    name.sin_port = (in_port_t)htons(port);
    name.sin_addr.s_addr = htonl(INADDR_ANY);
    int reuse = 1;
    if (setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (char *) &reuse, sizeof(int)) == -1)
        error("Can't set the reuse option on the socket");
    int c = bind(socket, (struct sockaddr *) &name, sizeof(name));
    if (c == -1)
        error("Can't bind to socket");
}

int say(int socket, char *s) {
    int result = send(socket, s, strlen(s), 0);
    if (result == -1)
        fprintf(stderr, "%s: %s\n", "Error talking to the client", strerror(errno));
    return result;
}

int listener_d;

void handle_shutdown(int sig) {
    if (listener_d)
        close(listener_d);

    fprintf(stderr, "Bye!\n");
    exit(0);
}


int main(int argc, char *argv[]) {
    
    listener_d = socket(PF_INET, SOCK_STREAM, 0);
    bind_to_port(listener_d, 30000);

    return 0;
}
