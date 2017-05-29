#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

// donuts with coffee
/* int main(int argc, char *argv[]) { */
/*     char *my_env[] = {"FOOD=coffee", NULL}; */
/*     if (execle("./coffee", "./coffee", "donuts", NULL, my_env) == -1) { */
/*         fprintf(stderr, "Can't run process 0: %s\n", strerror(errno)); */
/*         return 1; */
/*     } */
/* } */

// cream with donuts
/* int main(int argc, char *argv[]) { */
/*     char *my_env[] = {"FOOD=donuts", NULL}; */
/*     if (execle("./coffee", "./coffee", "cream", NULL, my_env) == -1) { */
/*         fprintf(stderr, "Can't run process 0: %s\n", strerror(errno)); */
/*         return 1; */
/*     } */
/* } */

// coffee with coffee
/* int main(int argc, char *argv[]) { */
/*     if (execl("./coffee", "coffee", NULL) == -1) { */
/*         fprintf(stderr, "Can't run process 0: %s\n", strerror(errno)); */
/*         return 1; */
/*     } */
/* } */

// coffee with donuts
int main(int argc, char *argv[]) {
    char *my_env[] = {"FOOD=donuts", NULL};
    if (execle("./coffee", "coffee", "coffee", NULL, my_env) == -1) {
        fprintf(stderr, "Can't run process 0: %s\n", strerror(errno));
        return 1;
    }
}
