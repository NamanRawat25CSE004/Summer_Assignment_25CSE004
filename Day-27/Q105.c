#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {

    struct Student s[3];

    printf("Enter details of 3 students:\n");

    for (int i = 0; i < 3; i++) {

        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\nStudent Records\n");

    for (int i = 0; i < 3; i++) {

        printf("\nRoll : %d\n", s[i].roll);
        printf("Name : %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);

    }

    return 0;
}