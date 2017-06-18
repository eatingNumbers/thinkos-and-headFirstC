#include <stdio.h>

int main() {

    int i = 3;
    int j = i++;
    printf("Postfix increment: i == %i and j == %i\n", i, j);

    int k = 3;
    int l = ++k;
    printf("Prefix increment: k == %i and l == %i\n", k, l);

    int a = 3;
    int b = a--;
    printf("Postfix decrement: a == %i and b == %i\n", a, b);

    int c = 3;
    int v = --k;
    printf("Prefix decrement: c == %i and v == %i\n", c, v);

    return 0;
}

