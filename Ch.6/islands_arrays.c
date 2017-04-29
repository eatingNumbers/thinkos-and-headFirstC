#include <stdio.h>
#include <string.h>

typedef struct island {
    char name[80];
    char *opens;
    char *closes;
    struct island *next;
} island;

void display(island *start) {
    island *i = start;

    for (; i != NULL; i = i->next) {
        printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes);
    }
}

island *create(char name[]) {
    island *i = malloc(sizeof(island));

    *(i).name = &name;
    i->opens = "09:00";
    i->closes = "17:00";
    i->next = NULL;

    return i;
}

int main() {
    char name[80];
    fgets(name, 80, stdin);
    island *p_island0 = create(name);

    /* char name2[80]; */
    fgets(name, 80, stdin);
    island *p_island1 = create(name);
    p_island0->next = p_island1;

    display(p_island0);

    island amity = {"Amity", "09:00", "17:00", NULL};
    island craggy = {"Craggy", "09:00", "17:00", NULL};
    island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
    island shutter = {"Shutter", "09:00", "17:00", NULL};

    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &shutter;

    island skull = {"Skull", "09:00", "17:00", NULL};
    isla_nublar.next = &skull;
    skull.next = &shutter;

    display(&amity);
}
