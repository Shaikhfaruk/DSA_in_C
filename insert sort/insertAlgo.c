// inseration
#include <stdio.h>

void main()
{
    int arr[5] = {8, 10, 15, 11};
    int N = 4, i = 0, index = 2, value = 3;
    printf("Printing array before insertion\n");

    for (i = 0; i < 4; i++)
    {
        printf("arr[%d]= %d \n", i, arr[i]);
    }
    for (i = N; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = value;
    N++;
    printf("printing array after insertion\n");
    for (i = 0; i < N; i++)
    {
        printf("arr[%d]=%d\n", i, arr[i]);
    }
}
