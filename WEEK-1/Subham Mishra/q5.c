// 5. Write a C program to enter the radius of a circle and find its diameter,
//    circumference and area.

#include <stdio.h>

int main()
{
    float r, pi = 3.14;
    printf("Enter the Radius: ");
    scanf("%f", &r);

    float d = 2 * r;
    float c = 2 * pi * r;
    float area = pi * r * r;

    printf("Diameter = %.2f\n", d);
    printf("Circumference = %.2f\n", c);
    printf("Area = %.2f", area);
}