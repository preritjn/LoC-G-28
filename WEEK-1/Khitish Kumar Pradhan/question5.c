#include<stdio.h>
int main(){ 
    float radius;
    float diameter;
    float area;
    float circumference;
    float pi;
    pi = 3.141;
    printf("Enter the radius :");
    scanf("%f",&radius);
    diameter = 2 * radius;
    area = pi * radius * radius;
    circumference = 2*pi*radius;
    printf("The diameter is %f" ,diameter);
    printf("The area is %f",area);
    printf("The circumference is %f",circumference);
    
    return 0;
}
