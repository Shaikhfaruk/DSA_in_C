// sorted Array
#include <stdio.h>

int main()
{
    int n, i, j, k, t;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        t = a[i];
        for (j = i - 1; j >= 0 && a[j] > t; j--)
            a[j + 1] = a[j];
        a[j + 1] = t;
    }
    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
