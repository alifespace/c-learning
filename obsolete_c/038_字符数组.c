// 字符数组：
//  1. 定义、初始化、存储特点
//      初始化：单个字符初始化、
//  2. 输入输出
//  3. 常用函数

#include <stdio.h>
#include <stdlib.h>
#define M 4 
#define N 10

int main() {
    char str1[N] = {'a', 'b', 'c'};
    char str2[N] = "hello";
    char str3[N];
    char str4[M] = {'a', 'b', 'c'};
    int i;

    for(i=0; i<N; i++) {
        printf("%c ", str1[i]);
    }
    printf("\n");

    for(i=0; i<N; i++) {
        printf("%c ", str2[i]);
    }
    printf("\n");

    // fgets(str3);
    puts(str3);
    puts("\n");
    puts(str4);

    return 0;
}