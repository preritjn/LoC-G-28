// 3. Write a C program to add two numbers using pointers.

#include<stdio.h>

int main()
{
    int x, y;
    int* px = &x;
    int* py = &y;

    printf("Enter first number, X: ");
    scanf("%d", px);
    printf("Enter first number, Y: ");
    scanf("%d", py);

    printf("%d + %d = %d", *px, *py, *px + *py);

}