#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    printf("Sum of %d and %d is %d", *ptr1, *ptr2, sum);

    return 0;
}