// Write a C program to count the frequency of each character of the string
#include <stdio.h>
#include <string.h>

void count_chars(char *s, int f[])
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        f[s[i]]++;
    }
}

void main()
{
    char s[100];
    int f[256] = {0};
    int i;

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    count_chars(s, f);

    printf("Character frequency in the string :");
    for (i = 0; i < 256; i++)
    {
        if (f[i] > 0)
        {
            printf("'%c' appeared %d times in the string \n", i, f[i]);
        }
    }
}
