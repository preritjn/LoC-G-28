#include <stdio.h>

void sum(int *a, int *b, int *result)
{
    *result = *a+*b;
}

int main()
{
    int a,b,result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum(&a, &b, &result);

    printf("Sum of %d and %d is %d\n", a, b, result);

    return 0;
}