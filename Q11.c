// Q11 - Find GCD of two numbers using Euclidean algorithm

#include <stdio.h>

int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    printf("GCD of %d and %d is: %d\n", a, b, find_gcd(a, b));

    return 0;
}