#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main() {
    response r[] = {
        {"Mike", DUMP}, {"Luis", SECOND_CHANCE},
        {"Matt", SECOND_CHANCE}, {"William", MARRIAGE}
    };

    int i;
    for (i = 0; i < 4; i++) {
            replies[i](r.type);
        }
    
    return 0;
}
