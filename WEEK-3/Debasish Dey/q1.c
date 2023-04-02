// Write a C program to remove a specific character from a string

#include <stdio.h>
#include <string.h>

void remove_char(char *s, char c)
{
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

void main()
{

    char s[100], c;

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter character to remove: ");
    scanf("%c", &c);

    remove_char(s, c);

    printf("Character removed from string gives: %s\n", s);
}
