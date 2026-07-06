#include <stdio.h>

struct Patient {
    int id;
    char name[30];
    int age;
};

int main() {

    struct Patient p[3];

    printf("Enter Patient Details:\n");

    for (int i = 0; i < 3; i++) {

        printf("\nPatient %d\n", i + 1);

        printf("Patient ID: ");
        scanf("%d", &p[i].id);

        printf("Name: ");
        scanf("%s", p[i].name);

        printf("Age: ");
        scanf("%d", &p[i].age);
    }

    printf("\nPatient Records\n");

    for (int i = 0; i < 3; i++) {

        printf("\nID   : %d\n", p[i].id);
        printf("Name : %s\n", p[i].name);
        printf("Age  : %d\n", p[i].age);
    }

    return 0;
}