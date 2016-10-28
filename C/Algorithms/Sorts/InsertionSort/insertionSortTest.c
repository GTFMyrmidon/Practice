#include <stdlib.h>
#include <time.h>
#include "insertionSort.c"

void printArray(int arr[], int n)
{
    for (int i  = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main ()
{
    int arr[10];
    srand(time(NULL));

    for (int i = 0; i < 10; ++i)
    {
        arr[i] = rand() % 100;
    }

    int n = sizeof(arr)/sizeof(int);

    printf("Unsorted Array: ");
    printArray(arr, n);
    insertionSort(arr, n);
    printf("Sorted Array: ");
    printArray(arr, n);

    return 0;
}
