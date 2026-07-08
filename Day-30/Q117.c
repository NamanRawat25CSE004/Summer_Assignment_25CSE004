#include <stdio.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}

int main() {

    float num1, num2;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\n1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("Answer = %.2f", add(num1, num2));
            break;

        case 2:
            printf("Answer = %.2f", subtract(num1, num2));
            break;

        case 3:
            printf("Answer = %.2f", multiply(num1, num2));
            break;

        case 4:
            if (num2 != 0)
                printf("Answer = %.2f", divide(num1, num2));
            else
                printf("Division by zero is not possible.");
            break;

        default:
            printf("Invalid Choice.");
    }

    return 0;
}