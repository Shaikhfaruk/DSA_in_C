// deletion sort1
#include <stdio.h>

void main()
{
    int arr[5] = {5, 4, 2, 1};
    int N = 4, i = 0, index = 2, value = 3;
    printf("Printing aary before deletion\n");
    printf("\nint arr[5] = {5, 4, 2, 1}\n");

    for (i = 0; i < 4; i++)
    {
        printf("arr[%d]= %d \n", i, arr[i]);
    }
    for (i = index; i < N; i++)
    {
        arr[i - 1] = arr[i];
    }
    N--;
    printf("printing ary after deletion\n");
    printf("\nint arr[5] = {5, 2, 1}\n");
    for (i = 0; i < N; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
}