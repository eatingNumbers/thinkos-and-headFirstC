#include <stdio.h>

int main() {

    int x = 1;
    int *px = &x;
    int readpx = *px;

    printf("The value of x using a pointer and dereferencing it is %i\n", readpx);
    printf("The value of px is %i\n", *px);
    printf("The address of px is %p\n", &px);
    printf("The address of x is %p\n", &x);
}
