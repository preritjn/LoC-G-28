#include <stdio.h>

int main()
{
    int x;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    if (x > 0)
        printf("%d is postive",x);
    else if (x < 0)
        printf("%d is negative",x);
    else if (x == 0)
        printf("%d is zero",x);
    return 0;
}
