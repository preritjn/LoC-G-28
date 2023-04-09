#include <stdio.h>

void factorial(int n, int *result)
{
    int i;
    *result=1;

    for(i=1; i<=n; i++)
    {
        *result= *result * i;
    }
}

int main()
{
    int n, result;

    printf("Enter a number:");
    scanf("%d", &n);

    factorial(n,&result);

    printf("Factorial of number is %d\n",result);

    return 0;
}