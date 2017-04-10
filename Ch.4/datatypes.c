#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("The value of INT_MAX is %i\n", INT_MAX); // [1]
    printf("The vlaue of INT_MIN is %i\n", INT_MIN);
    printf("An int takes %zu bytes\n\n", sizeof(int));

    printf("The value of SHRT_MAX is %i\n", SHRT_MAX); // [2]
    printf("The vlaue of SHRT_MIN is %i\n", SHRT_MIN);
    printf("A short takes %zu bytes\n\n", sizeof(short));

    printf("The value of LONG_MAX is %ld\n", LONG_MAX); // [3]
    printf("The vlaue of LONG_MIN is %ld\n", LONG_MIN);
    printf("A long takes %zu bytes\n\n", sizeof(long));

    printf("The value of CHAR_MAX is %i\n", CHAR_MAX); // [4]
    printf("The vlaue of CHAR_MIN is %i\n", CHAR_MIN);
    printf("A char takes %zu bytes\n\n", sizeof(char));

    printf("The value of FLT_MAX is %f\n", FLT_MAX);
    printf("The value of FLT_MIN is %.50f\n", FLT_MIN);
    printf("A float takes %zu bytes\n\n", sizeof(float));

    printf("The value of DBL_MAX is %f\n", DBL_MAX);
    printf("The vlaue of DBL_MIN is %.50f\n", DBL_MIN);
    printf("A double takes %zu bytes\n\n", sizeof(double));

    return 0;
}

// REFERENCE
// [1]. The integer max is a signed maximum since it's the default. It is 2^31
// since the signed bit takes a bit space for itself.
//
// [2]. The max for a short is 2^15, two bytes with the most significant bit as
// a signed bit.
//
// [3]. The max for a long is 2^63, 8 bytes and again with the most significant
// bit as a signed bit.
//
// [4]. The max for a char is 2^7. And as with the other data types has a signed
// bit.
