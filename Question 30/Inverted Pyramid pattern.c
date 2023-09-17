#include <stdio.h>

int main()
{
    int rows, i, j;

    // Input: Number of rows in the pyramid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--)
    {
        // Print spaces before the asterisks
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        // Print the asterisks
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}