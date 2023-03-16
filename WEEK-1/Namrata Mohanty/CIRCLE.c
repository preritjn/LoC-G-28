#include <stdio.h>
int main()
{
    float r, d, pi = 3.14, c, area;
    printf("enter the radius:\n ");
    scanf("%f", &r);
    d = r * 2;
    printf("diameter:%f\n", d);
    area = pi * r * r;
    printf("area:%f", area);
    c = 2 * pi * r;
    printf("circumference:%f\n", c);
    return 0;
}