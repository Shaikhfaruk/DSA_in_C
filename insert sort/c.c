#include <stdio.h>
void main()
{
    int LA[] = {1, 3, 5, 7, 8};
    int item = 10, k = 3, n = 5;
    int i = 0, j = n;
    printf("The Original array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", LA[i]);
    }
    n = n + 1;
    while (j >= k)
    {
        LA[j + 1] = LA[j];
        j = j - 1;
    }
    LA[k] = item;
    printf("\nThe array after insertion is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", LA[i]);
    }
}