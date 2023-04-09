#include <stdio.h>
#include <string.h>

#define maxsize 50

int main()
{
    char str[maxsize];
    int frequency[256] = {0};
    int i, l;

    printf("Enter a string: ");
    fgets(str, maxsize, stdin);

    l = strlen(str);

    for(i=0; i<l; i++)
    {
        frequency[str[i]]++;
    }

    printf("Frequency of all characters in the string: \n");
    for(i=0; i<256; i++)
    {
        if(frequency[i]!=0)
        {
            printf("'%c' = %d\n", i, frequency[i]);
        }
    }

    return 0;
}