#include <stdio.h>
#include <stdlib.h>

int main() {

    char card_name[3];
    int count = 0;

    do {

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
        case ('X'):
            printf("Exit game");
            break;
        default:
            val = atoi(card_name);

            if ((val < 1) && (val > 10))
                printf("Please enter a valid number!");
    }

    if ((val > 2) && (val < 7))
        count++;

    // Otherwise check if the card was 10, J, Q, or K.
    else if (val == 10)
        count--;

    } while (count); 

    return 0;
}

/* REFERENCE
 * [1]. Can be written as:
 *          switch (*card_name) {
 */
