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
    return a > b;
}

typedef struct {
    int width;
    int height;
} rectangle;

int compare_areas(const void *a, const void *b) {
    int rect_a = *(int *)a;
    int rect_b = *(int *)b;
    return  rect_a - rect_b;
}

int compare_names(const void *a, const void *b) {
    int name_a = *(int *)a;
    int name_b = *(int *)b;

    return strcmp(name_a,name_b) < 0;

}
