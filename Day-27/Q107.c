#include <stdio.h>

int main() {

    char name[30];
    float basic, hra, da, total;

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;

    total = basic + hra + da;

    printf("\nEmployee Name : %s\n", name);
    printf("Basic Salary  : %.2f\n", basic);
    printf("HRA           : %.2f\n", hra);
    printf("DA            : %.2f\n", da);
    printf("Total Salary  : %.2f\n", total);

    return 0;
}