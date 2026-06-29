#include <stdio.h>

int main()
{
    int rows, cols;
    int even = 0, odd = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter matrix elements:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] % 2 == 0)
                even++;
            else
                odd++;
        }
    }

    printf("Even Elements = %d\n", even);
    printf("Odd Elements = %d", odd);

    return 0;
}