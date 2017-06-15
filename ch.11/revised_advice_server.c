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

    char *advice[] = {
        "Take smaller bites\r\n",
        "Go for the tight jeans. No they do NOT make you look fat.\r\n",
        "One word: inappropriate\r\n",
        "Just for today, be honest. Tell your boss what you *really* think\r\n",
        "You might want to rethink that haircut\r\n"
    };

    open_listener_socket();
    /* int listener_d = socket(PF_INET, SOCK_STREAM, 0); */

    /* struct sockaddr_in name; */
    /* name.sin_family = PF_INET; */
    /* name.sin_port = (in_port_t)htons(30000); */
    /* name.sin_addr.s_addr = htonl(INADDR_ANY); */

    bind_to_port(listener_d, 30000);

    /* int reuse = 1; */
    /* if (setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (char *) &reuse, sizeof(int)) == -1) */
    /*     error("Can't set the reuse option on the socket"); */

    /* int c = bind(socket, (struct sockaddr *) &name, sizeof(name)); */
    /* if (c == -1) */
    /*     error("Can't bind to socket"); */


    /* if (bind(listener_d, (struct sockaddr *) &name, sizeof(name)) == -1) */
    /*     error("Can't bind the port"); */
    
    if (listen(listener_d, 10))
            puts("Waiting for connection");

    struct sockaddr_storage client_addr;
    unsigned int address_size = sizeof(client_addr);
    int connect_d = accept(listener_d, (struct sockaddr *) &client_addr, &address_size);
    char *msg = advice[rand() % 5];

    say(connect_d, msg);

    /* send(connect_d, msg, strlen(msg), 0); */
    /* close(connect_d); */
    handle_shutdown(listener_d);

    return 0;
}
