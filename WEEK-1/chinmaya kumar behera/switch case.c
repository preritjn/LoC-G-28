#include <stdio.h>

int main() {
    float num1, num2, result;
    int n;

    printf("Enter the first number: ");
    scanf("%f %f", &num1,&num2);

    printf("Enter the arithmetic operation you want to perform:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    scanf("%n");

    switch (n) {
        case 1:
            result = num1 + num2;
            printf("The sum of %f and %f is %f.\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("The difference between %f and %f is %f.\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("The product of %f and %f is %f.\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("The quotient of %f and %f is %f.\n", num1, num2, result);
            } else {
                printf("Cannot divide by zero.\n");
            }
           
    }

    return 0;
}