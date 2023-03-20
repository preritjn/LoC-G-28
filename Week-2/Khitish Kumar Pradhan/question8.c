#include <stdio.h>
void main()
{
    char s[20];
    int i, count = 0;
    printf("\nEnter a string: ");
    scanf("%s", s);
    for (i = 0; s[i]; i++)
    {
        switch (s[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            count++;
        }
    }
    printf("\nVowel=%d\nConsonant=%d", count, i - count);
}