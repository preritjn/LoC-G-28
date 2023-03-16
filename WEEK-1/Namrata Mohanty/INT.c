#include <stdio.h>
int main()
{
    int n;
    clrscr();
    printf("enter the value of n:");
    scanf("%d", &n);
    if (n > 0)
        printf("%d is a postive no");
    else if (n < 0)
        printf("%d is a negative no");
    else if (n == 0)
        printf("%d is zero");
    return 0;
}
