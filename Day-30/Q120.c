#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

int main() {

    struct Student s;
    int choice;

    do {

        printf("\n----- MENU -----\n");
        printf("1. Enter Student Details\n");
        printf("2. Display Student Details\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:

                printf("Enter Roll No: ");
                scanf("%d", &s.roll);

                printf("Enter Name: ");
                scanf("%s", s.name);

                printf("Enter Marks: ");
                scanf("%f", &s.marks);

                break;

            case 2:

                printf("\nStudent Details\n");
                printf("Roll No : %d\n", s.roll);
                printf("Name    : %s\n", s.name);
                printf("Marks   : %.2f\n", s.marks);

                break;

            case 3:
                printf("Program Ended.");
                break;

            default:
                printf("Invalid Choice.");
        }

    } while (choice != 3);

    return 0;
}