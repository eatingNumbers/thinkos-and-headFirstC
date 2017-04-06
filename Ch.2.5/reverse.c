#include <stdio.h>
#include <string.h>

void print_reverse(char *s) {

    size_t len = strlen(s);

    char *t = len + s - 1;

    while (t >= s) {
    
        printf("%c", *t);

        t--;
    }
    puts("");
}

int main() {

    char string_to_reverse[11];
    printf("What string do you want to reverse?\n");
    printf("The string is limited to 10 characters.\n");
    fgets(string_to_reverse, 10, stdin);
    print_reverse(string_to_reverse);

    return 0;
}
