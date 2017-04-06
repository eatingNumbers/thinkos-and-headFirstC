#include <stdio.h>

int main() {

    int s[] = {1, 2, 3};
    int *ps;

    printf("Size of array s is %li bytes\n", sizeof(s)); // [1]
    printf("The address of array s is %p\n", &s);
    printf("Size of pointer ps is %li bytes\n", sizeof(ps)); // [2]
    printf("The address of pointer ps is %p\n", &ps);
}

// REFERENCE
// [1]. This will print out the actual size of the array s which 12 bytes.
// [2]. This will print out the actual size of the pointer ps which 12 bytes.
