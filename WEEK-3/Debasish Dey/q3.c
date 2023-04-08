// Write a C program to add two numbers using pointers

#include <stdio.h>

void add_numbers(int *x, int *y, int *r)
{
    *r = *x + *y;
}

void main()
{
    int n, m, add;
    int *p1, *p2, *p_add;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter another number to add: ");
    scanf("%d", &m);

    p1 = &n;
    p2 = &m;
    p_add = &add;

    add_numbers(p1, p2, p_add);

    printf("%d added with %d gives %d\n", n, m, add);
}
