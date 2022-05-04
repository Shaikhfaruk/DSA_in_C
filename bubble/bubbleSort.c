// Bubble sort algorithm
#include <stdio.h>

int main()
{
    int i, j, n, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");

    // this loop is used to take input from user
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Current array elements\n: ");

    // this loop is used to display the array elements

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    for (i = 0; i < n - 1; i++)
    {
        // this loop is used to compare the adjacent elements
        for (j = 0; j < n - i - 1; j++)
        {
            // this if condition is used to compare the adjacent elements
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // this loop is for displaying the sorted array

    printf("\nSorted elements\n: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
