//2. Write a C program to count the frequency of each character of the string.//

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int freq[256] = {0}; 
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

  
    for (i = 0; i < strlen(str); i++) {
        freq[(int)str[i]]++;
    }

    
    printf("Frequency of each character in the string:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c = %d\n", i, freq[i]);
        }
    }

    return 0;
}