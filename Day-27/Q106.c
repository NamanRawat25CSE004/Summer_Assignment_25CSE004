#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {

    struct Employee e[3];

    printf("Enter Employee Details:\n");

    for (int i = 0; i < 3; i++) {

        printf("\nEmployee %d\n", i + 1);

        printf("ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);

    }

    printf("\nEmployee Records\n");

    for (int i = 0; i < 3; i++) {

        printf("\nID     : %d\n", e[i].id);
        printf("Name   : %s\n", e[i].name);
        printf("Salary : %.2f\n", e[i].salary);

    }

    return 0;
}