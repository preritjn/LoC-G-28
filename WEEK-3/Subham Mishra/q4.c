// 4. Write a C program to find the factorial of a number using pointers.
#include<stdio.h>

int factorial(int* pn)
{
    int f = 1;
    int* pf = &f;
    for(int i = 1; i <= *pn; i++)
        *pf *= i;

    return *pf;
}

int main()
{
    int n;
    int* pn = &n;
    
    printf("Enter a Number: ");
    scanf("%d", pn);

    printf("%d! = %d", n, factorial(pn));
}