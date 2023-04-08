// Write a C program to find the factorial of a number using pointers

#include <stdio.h>

void factorial(int *n, int *r)
{
    *r = 1;
    for (int i = 1; i <= *n; i++)
    {
        *r *= i;
    }
}

void main()
{
    int n, f, *p_n, *p_f;

    printf("Enter number to find factorial: ");
    scanf("%d", &n);

    p_n = &n;
    p_f = &f;

    factorial(p_n, p_f);

    printf("%d factorial is %d\n", n, f);
}
