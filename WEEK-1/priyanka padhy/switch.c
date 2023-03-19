#include<stdio.h>
int main()
{
    int a,b ,s,m,d,div;
    int co;
    printf("1. addition");
    printf("2.subtraction");
    printf("3.multiplication");
    printf("4.division");
    printf("enter 2 numbers");
    scanf("%d %d",&a,&b);
    printf("enter a choice");
    scanf("%d",&co);
    switch(co)
    {
        case 1 :
             s = a+b;
             printf("sum of %d and %d is %d ",s);
             break;

        case 2:
             d= a-b;
             printf("difference of %d and %d is %d",d);
            break;

        case 3 :
             m= a*b;
             printf("multiplication of %d and %d is %d",m);
            break;

        case 4:
               div = a/b;
             printf("division of %d and %d is %d" ,div);
             break;

        default:
              printf(" enter your correct choice");
            break;

    }

}