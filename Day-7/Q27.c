#include <stdio.h>

int sumDigits(int num)
{
    if(num == 0)
    {
        return 0;
    }

    return (num % 10) + sumDigits(num / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sumDigits(num));

    return 0;
}