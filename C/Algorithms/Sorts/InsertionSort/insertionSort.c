#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, j, x;
    for (i = 0; i < n; ++i)
    {
        x = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = x;
    }
}
