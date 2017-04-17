#include <stdio.h>

struct occupation {

    const char *description;
    const char *title;
    int salary;
};

struct hobby {

    const char *description;
    int time_per_week;
};

struct Person {

    const char *name;
    const char *country;
    float height;
    float weight;

    struct hobby leisure;
    struct occupation job;
};

void whois (struct Person p) {

    printf("Name: %s\n Country: %s, Height: %.2f, Weight: %.2f\n Hobby: %s, Time Spent on Hobby: %d\n Job: %s, Title: %s, Salary: %d\n", p.name, p.country, p.height, p.weight, p.leisure.description, p.leisure.time_per_week, p.job.description, p.job.title, p.job.salary);
}

int main() {

    struct Person new_guy = {"Joe Schmoe", "USA", 84, 201,
                            {"Crossfit", 10},
                            {"Banker", "Manager", 500000}};

    whois(new_guy);
    return 0;
}
