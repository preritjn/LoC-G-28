#include<stdio.h>
#include<conio.h>
int main()
{
    int n ;
    printf("enter a number");
    scanf("%d",&n);
    if(n>0)
    {
        printf("number is positive");
    }
    if(n<0)
    {
        printf("number is negavtive");
    }
    if(n==0)
    {
        printf("number is zero");
    }
    return 0;
}

