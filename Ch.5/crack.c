#include <stdio.h>

typedef struct {

    const char *description;
    float value;
} swag;

typedef struct {

    swag *swag;
    const char *sequence;
} combination;

typedef struct {

    combination numbers;
    const char *make;
} safe;

int main() {

    swag gold = {"GOLD!", 100000.0};
    combination numbers = {&gold, "6502"};
    safe s = {numbers, "RAMACON250"};

    printf("I got the %s\n", s.numbers.swag->description);
}
