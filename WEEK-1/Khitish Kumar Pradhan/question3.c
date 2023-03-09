#include<stdio.h>
int main(){
    int i,m,sum=0;
    printf("Enter a number :");
    scanf("%d",&i);
    do
    {
        m = i % 10;
        i = i / 10;
        sum = sum + m;
    } while(i > 0);
    printf("The sum of digits of the given number is %d",sum);
    return 0;
}
