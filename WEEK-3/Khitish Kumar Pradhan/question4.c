#include <stdio.h>

int main()
{
    int num, i;
    int *p;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    p = &num;

    for (i = 1; i <= *p; i++)
    {
        fact *= i;
    }

    printf("The factorial of %d is %d.\n", *p, fact);

    return 0;
}
