#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, freq[256] = {0};

    printf("Enter a string: ");
    gets(str);

    for (i = 0; i < strlen(str); i++)
    {
        freq[str[i]]++;
    }

    printf("Character frequency in the string:\n");

    for (i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("'%c' occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}