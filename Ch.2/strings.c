#include <stdio.h>

void message(char msg[]) {

    printf("Message reads: %s\n", msg);
    printf("msg occupies %i bytes\n", sizeof(msg));
}
int main() {

    char msg[] = "I'm a message and I'm great.";

    message("Hello and Goodbye and Hello again");

    printf("%s\n", msg);
    printf("Size of msg is %li\n", sizeof(msg));
    printf("The size of the string is %li\n", sizeof("What size am I?"));
}
