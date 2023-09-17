#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, i;
    int isDecreasing = 1; // Assume the array is in decreasing order initially

    // Input: Size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    // Input: Array elements
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Check if the array is in decreasing order
    for (i = 1; i < size; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            isDecreasing = 0; // Set to 0 if not in decreasing order
            break;
        }
    }

    // Output the result
    if (isDecreasing)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    free(arr); // Don't forget to free the allocated memory

    return 0;
}
