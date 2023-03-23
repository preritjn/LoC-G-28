#include<stdio.h>
int main()
{
    int num,result,r ;
    printf("enter anumber");
    scanf("%d",&num);
    
    while(num!=0)
    {
        r=num%10;
        result=r*r*r;
        num/=10;

    }
    if(result==num)
    printf("%d is amstrong number",num);
    else
    printf("%d is a not amstong num",num);
     
     return 0;
}