#include <stdio.h>

int main()
{
    int x;
    for (x = 1; x <= 100; x++)
    {
        if (x % 3 == 0 && x % 5 == 0)
        {
            printf("fizz buzz\n");
        }
        else if (x % 3 == 0)
        {
            printf("fizz\n");
        }
        else if (x % 5 == 0)
        {
            printf("buzz\n");
        }
        else
        {
            printf("%d\n", x);
        }
    }
    return 0;
}