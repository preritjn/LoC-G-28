// 10. Write a program to find the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    int alpha = 0, digit = 0, special=0;

    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 48 && s[i] <= 57)
            digit++;

        else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            alpha++;

        else
            special++;
    }       
    
    printf("Alphabets = %d\n", alpha);
    printf("Digits = %d\n", digit);
    printf("Special characters = %d", special);
}