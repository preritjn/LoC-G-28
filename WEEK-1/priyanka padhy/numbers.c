#include<stdio.h>
#include<conio.h>
int main()
{
    int n;int sum=0;int m;
    printf("enter a number");
    scanf("%d",&n);
    do 
    {
        m= n%10;
        sum = sum + m;
        n = n/10;
    } while (n>0);

    printf("%d\n",sum);
    return 0;   
}