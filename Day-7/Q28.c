#include <stdio.h>

int reverseNum(int num, int rev)
{
    if(num == 0)
    {
        return rev;
    }

    rev = rev * 10 + (num % 10);

    return reverseNum(num / 10, rev);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d", reverseNum(num, 0));

    return 0;
}