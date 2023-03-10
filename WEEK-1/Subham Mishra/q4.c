// 4. Write a C program to enter two numbers and perform all arithmetic
//    operations using switch case.

#include <stdio.h>
#include <conio.h>

int main()
{
    float a, b;
    char c;

    printf("Operation: ");
    c = getchar(); // Doubt!
    printf("Enter first Number: ");
    scanf("%f", &a);
    printf("Enter second Number: ");
    scanf("%f", &b);

    switch (c)
    {
    case '+':
        printf("%.2f + %.2f = %.2f", a, b, a + b);
        break;

    case '-':
        printf("%.2f - %.2f = %.2f", a, b, a - b);
        break;

    case '*':
        printf("%.2f * %.2f = %.2f", a, b, a * b);
        break;

    case '/':
        if (b == 0)
        {
            printf("Division by 0 not Defined");
            break;
        }
        printf("%.2f / %.2f = %.2f", a, b, a / b);
        break;

    case '%':
        printf("%d | %d = %d", (int)a, (int)b, (int)a % (int)b);
        break;

    default:
        printf("Enter proper Operator");
        break;
    }
}