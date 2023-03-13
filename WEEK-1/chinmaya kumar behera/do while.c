#include <stdio.h>
void main()
{
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    do {
        digit = num % 10;   
        sum += digit;       
        num /= 10;         
    } while (num != 0);    
    
    printf("Sum of digits: %d\n", sum);
    getch();
  
}