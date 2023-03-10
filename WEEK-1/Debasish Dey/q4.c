// Write a C program to enter two numbers and perform all arithmetic operations using switch case

#include <stdio.h>

int main()
{
    int x, y;
    char operator;
    printf("Enter the operator you want to use : ");
    scanf("%c", &operator);
    printf("Enter two integrs separated by spaces : ");
    scanf("%d %d", &x, &y);

    switch (operator)
    {
    case '+':
        printf("The sum of the numbers is : %d", x + y);
        break;
    case '-':
        printf("The difference of the numbers is : %d", x - y);
        break;
    case '*':
        printf("The product of the two numbers is : %d", x * y);
        break;
    case '/':
        printf("The two numbers when divided gives : %d", x / y);
        break;
    case '%':
        printf("The two numbers then operated with modulo gives : %d", x % y);
        break;
    default:
        printf("Please select a valid operator ammong : '+','-','*','/','%'");
        break;
    }

    return 0;
}