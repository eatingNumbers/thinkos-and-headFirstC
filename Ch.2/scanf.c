#include <stdio.h>

int main() {

    int age;
    char firstName[10], lastName[10];

    printf("Please enter your first name ");
    printf("followed by your last name and age.\n");
    scanf("%s %s %i", firstName, lastName, &age);

    printf("First Name: %s Last Name: %s Age:%i \n", firstName, lastName, age);
}
