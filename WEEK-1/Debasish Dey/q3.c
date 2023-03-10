// Write a program that takes a number as input and prints the sum of its digits using a do-while loop

#include <stdio.h>

int main()
{
    int z, sum;
    printf("Enter an integer: ");
    scanf("%d", &z);
    sum = 0;
    do
    {
        sum += z % 10;
        z /= 10;
    } while (z > 0);
    {
        printf("The sum is : %d", sum);
    }

    return 0;
}