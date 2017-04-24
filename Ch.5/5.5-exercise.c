#include <stdio.h>
#include <string.h>

char lower_to_upper(char *s) {
    
    int word;
    word = (int)s << 2;
    char new_word = (char)word;
 
    for (int i = 0; i < 10; i++) 
        printf("New word:%c\n", new_word);

    return new_word;
}

int main() {
    
    char original_word[10];
    fgets(original_word, 10, stdin);

    printf("Old word:%s\n", original_word);

    lower_to_upper(original_word);
}
