#include <stdio.h>
int main()
{
    int m, n, o;
    clrscr();
    printf("1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n");
    printf("enter the values of m and n:");
    scanf("%d%d", &m, &n);
    printf("enter your choice:");
    scanf("%d", &o);
    switch (o)
    {
    case 1:
        printf("sum of %d and %d is:%d", m, n, m + n);
        break;
    case 2:
        printf("difference of%d and %d is: %d", m, n, m - n);
        break;
    case 3:
        printf("multiplication of %d and %d is: %d", m * n);
        break;
    case 4:
        printf("division of %d and %d is:%d", m, n, m / n);
        break;
    deafult:
        printf("enter a valid no");
        break;
    }
    return 0;
}