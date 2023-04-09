#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], ch, new_str[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character want to remove: ");
    scanf("%c", &ch);

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] != ch)
        {
            new_str[j++] = str[i];
        }
    }
    new_str[j] = '\0';

    printf("The string after removing %c: %s", ch, new_str);

    return 0;
}