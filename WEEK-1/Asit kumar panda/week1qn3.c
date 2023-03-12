#include <stdio.h>
int main()
{
  int num, sum = 0, digit;
  printf("Enter a number: ");
  scanf("%d", &num);
  do
  {
    digit = num % 10;
    sum += digit;
    num /= 10;
  } while (num != 0);
  printf("The sum of the digits is %d\n", sum);
  return 0;
}
