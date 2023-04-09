//3. Write a C program to add two numbers using pointers.//
#include <stdio.h>

int add(int *a, int *b) {
    return *a + *b;
}

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    int sum = add(ptr1, ptr2);
    printf("The sum of %d and %d is %d\n", *ptr1, *ptr2, sum);

    return 0;
}