// Write a program that takes a number as input and checks whether it is positive, negative or zero.

#include <stdio.h>

int main()
{
    int x;

    printf("Enter an integer: ");
    scanf("%d", &x);
    if (x > 0)
        printf("The number is Positive");
    else if (x < 0)
        printf("The nnumber is Negative");
    else
        printf("It's Zero");
    return 0;
}