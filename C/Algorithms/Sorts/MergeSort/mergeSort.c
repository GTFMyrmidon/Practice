#include <stdio.h>

/*
PSEUDOCODE

MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:
             middle m = (l+r)/2
     2. Call mergeSort for first half:
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
*/

void merge(int arr[], int l, int m, int r)
{
    int i, j, k; // Loop Counters
    int n1 = m - l + 1; // Left Half
    int n2 = r - m; // Right Half

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data from original array into temp arrays
    for (i = 0; i < n1; ++i)
    {
        L[i] = arr[l + i];
    }
    for (j = 0; j < n2; ++j)
    {
      R[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
      if (L[i] <= R[j])
      {
        arr[k] = L[i];
        ++i;
      }
      else
      {
        arr[k] = R[j];
        ++j;
      }
      ++k;
    }

    if (i < n1)
    {
      while (i < n1)
      {
        arr[k] = L[i];
        ++i;
        ++k;
      }
    }
    else
    {
      while (j < n2)
      {
        arr[k] = R[j];
        ++j;
        ++k;
      }
    }
}

/*
    l = leftmost index of subarray to be sorted
    r = rightmost index of subarray to be sorted
    arr = subarray to be sorted
*/
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
      // Same as (l+r)/2, but avoids overflow
      int m = l + (r - l)/2;

      // Sort left and right halves
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);

      // Merge sorted subarrays
      merge(arr, l, m, r);
    }
}
