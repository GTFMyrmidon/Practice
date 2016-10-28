#include <stdio.h>

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};

  int numElements = sizeof(arr)/sizeof(int);
  int sum = (1 + 10) * 10 / 2;

  int i;
  for (i = 0; i < numElements; ++i)
  {
    sum -= arr[i];
  }

  printf("Missing number is: %d.\n", sum);

  return 0;
}
