#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str1[] = "hello World";
    char *p1 = str1;
    char *str2 = "hello";

    printf("%ld, %ld\n", sizeof(str1), strlen(str1));
    printf("%ld, %ld\n", sizeof(str2), strlen(str2));
    // strcpy(str2, "w");  段错误，因为 str2 指向常量"hello"
    printf("%c %d\n", *(p1+4), *(p1+5));
    puts(p1+6);

    exit(0);
}