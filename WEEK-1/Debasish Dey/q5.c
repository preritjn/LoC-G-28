//Write a C program to enter the radius of a circle and find its diameter, circumference and area

#include <stdio.h>

int main(){
    float r;
    const float pi = 3.141;
    printf("Enter the radius of circle : ");
    scanf("%f",&r);

    printf("The diameter of the circle is : %f\n", 2 * r);
    printf("The circumference of the circle is : %f\n", 2 * pi * r);
    printf("The area of the circle is : %f\n", pi * r *r);

    return 0;
}