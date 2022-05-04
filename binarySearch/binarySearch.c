// Binary search algorithm and its implementation and explanation and sorting
#include <stdio.h>

int main()
{
    int i, j, n, temp, key, low, high, mid;
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

    printf("\nEnter the key to be searched: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            printf("\nKey found at index %d", mid);
            break;
        }
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if (low > high)
        printf("\nKey not found");

    return 0;
}
