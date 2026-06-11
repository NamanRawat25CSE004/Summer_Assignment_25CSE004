// Q12 - Find LCM of two numbers


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

    int lcm = (a * b) / find_gcd(a, b);
    printf("LCM of %d and %d is: %d\n", a, b, lcm);

    return 0;
}
