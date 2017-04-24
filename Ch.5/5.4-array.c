#include <stdio.h>

void f1();
void f2();

int main() {

    f1();
    f2();

    printf("%d\n", array[-2]);
    printf("%d\n", array[-1]);
    printf("%d\n", array[1]);
    printf("%d\n", array[2]);
}

void f1() {

    int i;
    int array[100];

    for (i = 0; i < 100; i++) {
        array[i] = i;
    }
}

void f2() {

    int x = 17;
    int array[10];
    int y = 123;

    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }

    /* printf("%d\n", array[-2]); */
    /* printf("%d\n", array[-1]); */
    /* printf("%d\n", array[10]); */
    /* printf("%d\n", array[11]); */
}
