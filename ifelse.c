#include <stdio.h>
int main()
{
  int a, b;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  if (a < b)
  {
    printf("a is smaller then b");
  }
  else
  {
    printf("b is smaller then a");
  }
}