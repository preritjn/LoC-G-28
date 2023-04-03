#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int frequency[256] = {0};
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        frequency[str[i]]++;
    }

    printf("Character frequency:\n");

    for (i = 0; i < 256; i++)
    {
        if (frequency[i] != 0)
        {
            printf("%c: %d\n", i, frequency[i]);
        }
    }

    return 0;
}
