#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) {
    printf("Diners: %s\n", argv[1]);
    printf("Juice: %s\n", getenv("JUICE"));

    printf("Argument count is: %d\n", argc);

    return 0;
}
