#include<stdio.h>
int main ()
{
    float r,d,c,a;
    printf("enter radius of circle");
    scanf("%f",&r);
    {
        d=2*r;
        c=2*3.14*r;
        a=3.14*r*r;
    }
    printf("diameter of circle =%.2f units\n",d);
    printf("area of circle = %.2f units\n",a);
    printf("circumference of circle = %.2f\n",c);
    return 0; 
}