#include <stdio.h>

int main() {
    float radius, diameter, circumference, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius;
    area = 3.14 * radius * radius;

    printf("Diameter: %f\n", diameter);
    printf("Circumference: %f\n", circumference);
    printf("Area: %f\n", area);
    return 0;
    
  
}