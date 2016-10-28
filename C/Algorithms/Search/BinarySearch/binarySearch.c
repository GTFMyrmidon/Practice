#include <stdio.h>

int binarySearch(int arr[], int l, int r, int target)
{
    if (r >= l)
    {
        int m = l + (r - l) / 2;
        if (arr[m] == target)
        {
            return m;
        }

        if (arr[m] > target)
        {
            return binarySearch(arr, l, m - 1, target);
        }

        return binarySearch(arr, m + 1, r, target);
    }

    return -1;
}
