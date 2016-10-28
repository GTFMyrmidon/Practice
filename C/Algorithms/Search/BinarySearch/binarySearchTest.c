#include <stdlib.h>
#include <time.h>
#include "quickSort.c"
#include "binarySearch.c"

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
    int arr[100];
    int target;
    srand(time(NULL));

    for (int i = 0; i < 100; ++i)
    {
        arr[i] = rand() % 100;
    }

    target = rand() % 100;
    int n = sizeof(arr)/sizeof(int);
    quickSort(arr, 0, n - 1);
    printf("Array: ");
    printArray(arr, n);
    printf("Searching For: %d\n", target);
    int result = binarySearch(arr, 0, n - 1, target);

    (result == -1) ? printf("Target not found\n") : printf("Target found at index: %d\n", result);
   
    return 0;
}

