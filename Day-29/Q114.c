#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    int marks;
};

int main() {

    struct Student s[3];

    printf("Enter Student Details:\n");

    for (int i = 0; i < 3; i++) {

        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nStudent Records\n");

    for (int i = 0; i < 3; i++) {

        printf("\nRoll  : %d\n", s[i].roll);
        printf("Name  : %s\n", s[i].name);
        printf("Marks : %d\n", s[i].marks);
    }

    return 0;
}