// Q10 - Print all prime numbers in a given range

#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int start, end;
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (is_prime(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
