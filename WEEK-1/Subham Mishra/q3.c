// 3. Takes a number as input and prints the sum of its digits using do while loop.

#include <stdio.h>

int main()
{
    int n, r, sum = 0;
    printf("Enter a Number: ");
    scanf("%d", &n);

    do
    {
        r = n % 10;
        sum += r;
        n /= 10;
    } while (n > 0);

    printf("Sum of digits = %d", sum);
}