//4. Write a C program to find the factorial of a number using pointers.//
#include <stdio.h>

int factorial(int *n) {
    int fact = 1;
    for (int i = 1; i <= *n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &num);

    ptr = &num;

    int fact = factorial(ptr);
    printf("The factorial of %d is %d\n", *ptr, fact);

    return 0;
}