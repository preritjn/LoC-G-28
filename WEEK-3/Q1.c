#include <stdio.h>
#include <string.h>

void removechar(char *s, char c) {
    int i, j = 0;
    int len = strlen(s);
    for (i = 0; i < len; i++) {
        if (s[i] != c) {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main() {
    char s[100];
    char c;

    printf("Enter a string: ");
    fgets(s, 100, stdin);

    printf("Enter the character to remove: ");
    scanf("%c", &c);

    removechar(s, c);

    printf("The new string with removed characters is: %s\n", s);

    return 0;
}