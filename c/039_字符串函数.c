#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 3
#define STRINGSIZE 8 

int main() {
    char str1[M] = {'a', 'b', 'c'};
    char str2[M], str3[M];

    printf("039_字符串函数.c\n");
    printf("字符串：%s\n", str1);
    printf("scanf(): ");
    scanf("%s", str1);
    printf("字符串：%s\n", str1);

    printf("str1的长度(strlen): %ld\n", strlen(str1));
    printf("str1的长度(sizeof): %ld\n", sizeof(str1));

    // strcpy(str2, "Hello\0 World");
    printf("strcpy(): %s\n", str2);   
    strncpy(str2, "Hello World", 2);
    printf("strncpy(): %s\n", str2);

    char str4[STRINGSIZE] = "hello";
    strcat(str4, " strcat world");
    puts(str4);
    char str5[STRINGSIZE] = "hello ";
    strncat(str5, "0123456789world!world012345", STRINGSIZE);  // 拼接nsize个字符
    printf("arr5 lengh: %ld: %s\n", strlen(str5), str5);

    exit(0);

}