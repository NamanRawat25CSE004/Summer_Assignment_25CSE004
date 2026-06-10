#include <stdio.h>

int main()
{
    int num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0)
    {
        count = 1;
    }

    while(num != 0)
    {
        count++;
        num = num / 10;
    }

    printf("Number of digits = %d", count);

    return 0;
}
