#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "I left my heart in Harard Med School",
    "Newark, Newark - a wonderful town",
    "Dancing with a Dork",
    "From here to maternity",
    "The girl from Iwo Jima",
};

int main() {

    void find_track();
    /* void find_track(char search_for[]); */ // [1]

    char search_for[80];
    printf("Search for: ");

    fgets(search_for, 80, stdin);
    /* scanf("%79s", search_for); */ // [2]

    /* search_for[strlen(search_for)] = '\0'; */
    search_for[strlen(search_for)] = 'X';
    search_for[strlen(search_for) - 1] = 'X';  // [3]
    /* search_for[strlen(search_for) - 1] = ' '; */ // [3]

    for (unsigned long int i = 0; i < strlen(search_for); i++)
        printf("%li = %c\n", i, search_for[i]);

    printf("Searching for %s\n", search_for);
    printf("String length is %li\n", strlen(search_for));
    find_track(search_for);
    return 0;
}

void find_track(char search_for[]) {

    int i;

    for (i = 0; i < 5; i++) {
    
        if (strstr(tracks[i], search_for))
            printf("Track %i: '%s'\n", i, tracks[i]);
    }
}

// REFERENCE
// [1]. This is a prototype declaraction used if functions are written after
// main(). It works the same way as the function written above it.
// [2]. This works the same way as fgets, however, less secure.
// [3]. Works the same way as '\0'.
