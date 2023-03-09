// Write a program to print the numbers 1 to 100 , but replace the multipes of 3 with "Fizz" and  multiples of 5 with "Buzz".

#include <stdio.h>

int main()
{

    int i;
    for (i = 1; i <= 100; i++)
        if (i % 3 == 0)
            printf("Fizz\n");
        else if (i % 5 == 0)
            printf("Buzz\n");
        else if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");
        else
            printf("%d\n", i);

    return 0;
}