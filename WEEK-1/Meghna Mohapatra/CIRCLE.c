#include <stdio.h>

int main()
{
    float r, d, pi = 3.14, ci, area;
    printf("Enter the radius: ");
    scanf("%f", &r);
    d = r * 2;
    printf("Diameter of the circle is: %f\n", d);
    area = pi * r * r;
    printf("Area of the circle: %f\n", area);
    ci = 2 * pi * r;
    printf("Circumference of the circle is: %f", ci);
    return 0;
}