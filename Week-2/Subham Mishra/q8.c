// 8. Write a program to find the number of vowels and consonants in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    int consonant_count, vowel_count = 0;
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char s[100];
    printf("Enter the string: ");
    scanf("%s", s);
    
    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < 10; j++)
            if (s[i] == vowels[j])
            {
                vowel_count ++ ;
                break;
            }
    }           

    consonant_count = strlen(s) - vowel_count;
    
    printf("No. of vowels is : %d\n", vowel_count);
    printf("No. of consonants is : %d\n", consonant_count);
}