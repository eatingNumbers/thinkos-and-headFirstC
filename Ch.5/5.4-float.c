#include <stdio.h>

union {
    float f;
    unsigned int u;
} p;

int main() {

    p.f = -13.0;
    unsigned int sign = (p.u >> 31) & 1;
    unsigned int exp = (p.u >> 23) & 0xff;

    unsigned int coef_mask = (1 << 23) - 1;
    unsigned int coef = p.u & coef_mask;

    printf("%d\n", sign);
    printf("%d\n", exp);
    printf("0x%x\n", coef);

}
