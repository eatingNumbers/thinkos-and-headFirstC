#include <stdio.h>
#include <string.h>

int main() {

    char word[10];
    int i = 0;
    while (scanf("%9s", word) == 1) {
    
        i++;
        if ((i % 2) == 0) {
            fprintf(stdout, "%s\n", word);
            printf("%i mod 2 = %i\n", i, i % 2);
        } else {
            fprintf(stderr, "%s\n", word);
            printf("%i mod 2 = %i\n", i, i % 2);
        }
    }

    return 0;
}
