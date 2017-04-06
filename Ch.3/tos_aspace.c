#include <stdio.h>
#include <stdlib.h>

int global;

int times_called() {

    static int counter = 0;
    counter++;
    
    printf("Counter is %i\n", counter);
    printf("Address of counter is %p\n", &counter);
    return counter;
}

int main() {

    int local = 5;
    int local_2 = 5;
    int local_3 = 5;
    int local_4 = 5;
    void *p = malloc(128);
    void *p2 = malloc(128);
    void *p3 = malloc(128);

    printf("Address of main is %p\n", main);
    printf("Address of global is %p\n", &global);
    printf("Address of local is %p\n", &local);
    printf("Address of local_2 is %p\n", &local_2);
    printf("Address of local_3 is %p\n", &local_3);
    printf("Address of local_4 is %p\n", &local_4);
    printf("Address of p is %p\n", p);
    printf("Address of p2 is %p\n", p2);
    printf("Address of p3 is %p\n", p3);

    times_called();
}
