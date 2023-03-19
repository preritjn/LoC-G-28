#include <stdio.h>

int main()
{
    int a, b, o;
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n");
    printf("Enter the values of a & b : ");
    scanf("%d %d", &a, &b);
    printf("enter your choice:");
    scanf("%d", &o);
    switch (o)
    {
    case 1:
        printf("sum of %d and %d is : %d", a, b, a + b);
        break;
    case 2:
        printf("difference of %d and %d is : %d", a, b, a - b);
        break;
    case 3:
        printf("multiplication of two numbers is %d", a * b);
        break;
    case 4:
        printf("division of %d and %d is : %d", a, b, a / b);
        break;
    deafult:
        printf("enter a valid no");
        break;
    }
    return 0;
}