#include <stdio.h>
#include <string.h>

#define MAXSIZE 100

void reverseString(char str[], int size)
{
  int i = 0;
  char temp;
  int j = size - 1;

  while (i < j)
  {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    ++i;
    --j;
  }
}

int main()
{
  char str[MAXSIZE];

  printf("Enter your string: \n");
  fgets(str, MAXSIZE, stdin);
  printf("String is: %s\n", str);
  reverseString(str, strlen(str));
  printf("Reversed string is: %s\n", str);

  return 0;
}
