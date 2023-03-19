// 4. Write a C program to print the following pattern using loop
//    1
//    2 3
//    4 5 6
//    7 8 9 10
//    11 12 13 14 15

#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        int count = i;
        while(count--)
        {
            printf("%d ", num);
            num ++ ;
        }
        printf("\n");
    }
}