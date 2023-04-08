#include <stdio.h>

struct Person {
    char name[20];
    int age;
    float height;
};

int main() {
    struct Person p;

    printf("Size of Person struct is %zu bytes\n", sizeof(p));

    return 0;
}