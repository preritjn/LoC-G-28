#include <stdio.h>
int main()
{
    int n, s, r;
    printf("enter an integer\n");
    scanf("%d", &n);
    do
    {
        r = n % 10;
        s += r;
        n = n / 10;
    } while (n != 0);
    printf("sum is%d", s);
    return 0;
}