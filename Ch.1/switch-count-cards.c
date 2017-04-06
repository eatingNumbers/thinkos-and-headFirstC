#include <stdio.h>
#include <stdlib.h>

int main() {

    char card_name[3];
    puts("Enter the card_name: ");
    scanf("%2s", card_name);
    int val = 0;

    switch (card_name[0]) { // [1]
    
        case ('K'):
            val = 10;
            break;
        case ('Q'):
            val = 10;
            break;
        case ('J'):
            val = 10;
            break;
        case ('A'):
            val = 11;
            break;
        default:
            val = atoi(card_name);
    }

    if ((val > 2) && (val < 7))
        puts("Count has gone up");

    // Otherwise check if the card was 10, J, Q, or K.
    else if (val == 10)
        puts("Count has gone down");

    return 0;
}

/* REFERENCE
 * [1]. Can be written as:
 *          switch (*card_name) {
 */
