#include <stdio.h>

int main() {
    int num;
    int largestPrime = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i = 2; i <= num; i++) {

        if(num % i == 0) {

            int isPrime = 1;

            for(int j = 2; j < i; j++) {
                if(i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }

            if(isPrime == 1) {
                largestPrime = i;
            }
        }
    }

    printf("Largest Prime Factor = %d", largestPrime);

    return 0;
}
