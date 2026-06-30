#include <stdio.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i;
    char maxChar;
    int maxCount = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character = %c", maxChar);
    printf("\nFrequency = %d", maxCount);

    return 0;
}#include <stdio.h>

int main()
{
    char str[100];
    int count[256] = {0};
    int i;
    char maxChar;
    int maxCount = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        count[str[i]]++;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character = %c", maxChar);
    printf("\nFrequency = %d", maxCount);

    return 0;
}