#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *p1, *p2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    p1 = &num1;
    p2 = &num2;

    sum = *p1 + *p2;

    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;
}
