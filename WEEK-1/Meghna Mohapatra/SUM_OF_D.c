#include <stdio.h>

int main()
{
    int n, sum = 0, rem;
    printf("Enter an integer : ");
    scanf("%d", &n);
    do
    {
        rem = n % 10;
        sum += rem;
        n = n / 10;
    } while (n != 0);
    printf("sum of digits is : %d", sum);
    return 0;
}