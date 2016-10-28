#include <stdio.h>
#include <string.h>
#define MAXSIZE 100

int main()
{
  int neg = 0;
  int num = 0;
  char arr[MAXSIZE];
  printf("Enter a number: ");
  fgets(arr, MAXSIZE, stdin);

  if (arr[0] == '-')
  {
    neg = 1;
  }

  int i;

  if (neg)
  {
    for (i = 1; i < strlen(arr) - 1; ++i)
    {
      num = num * 10 + (arr[i] - '0');
    }
    num *= -1;
  }
  else
  {
    for (i = 0; i < strlen(arr) - 1; ++i)
    {
      num = num * 10 + (arr[i] - '0');
    }
  }

  printf("String is: %s", arr);
  printf("Resulting numbers: %d\n", num);

  return 0;
}
