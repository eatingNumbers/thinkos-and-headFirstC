#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *name_pointer_array[] = {

        "First Name: Joe",
        "Last Name: Schmoe",
    };

    printf("Size of array is %li\n", sizeof(*name_pointer_array));
    printf("Address of pointer is %p\n", name_pointer_array);
    printf("Address of the first element is %p\n", name_pointer_array[0]);

    char name_two_dimensional_array[][80] = {

        "First Name: Joe",
        "Last Name: Schmoe",
    };

    printf("Size of array is %li\n", sizeof(name_two_dimensional_array));
    printf("Address of array is %p\n", name_two_dimensional_array);
    printf("Address of the first element is %p\n", name_two_dimensional_array[0]);
}
