#include <stdio.h>

int main() {

    char name[30];
    int m1, m2, m3, total;
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of Subject 1: ");
    scanf("%d", &m1);

    printf("Enter Marks of Subject 2: ");
    scanf("%d", &m2);

    printf("Enter Marks of Subject 3: ");
    scanf("%d", &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n----- Marksheet -----\n");

    printf("Name       : %s\n", name);
    printf("Subject 1  : %d\n", m1);
    printf("Subject 2  : %d\n", m2);
    printf("Subject 3  : %d\n", m3);
    printf("Total      : %d\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 40)
        printf("Result     : Pass\n");
    else
        printf("Result     : Fail\n");

    return 0;
}