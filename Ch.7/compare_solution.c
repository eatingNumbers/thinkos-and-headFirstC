#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare_scores(const void *score_a, const void *score_b) {
    int a = *(int *)score_a;
    int b = *(int *)score_b;
    return a - b;
}

int compare_scores_desc(const void *score_a, const void *score_b) {
    int a = *(int *)score_a;
    int b = *(int *)score_b;
    return b - a;
}

typedef struct {
    int width;
    int height;
} rectangle;

int compare_areas(const void *a, const void *b) {
    rectangle *ra = (rectangle *)a;
    rectangle *rb = (rectangle *)b;

    int area_a = (ra->width * ra->height);
    int area_b = (rb->width * rb->height);

    return area_a - area_b;
}

int compare_names(const void *a, const void *b) {
    char **name_a = (char **)a;
    char **name_b = (char **)b;

    return strcmp(*name_a,*name_b);
}

int compare_areas_desc(const void *a, void *b) {
    return compare_areas(b,a);
    // or
    // return -compare_areas(a,b);
}

int compare_names_desc(const void *a, void *b) {
    return compare_names(b,a);
}
