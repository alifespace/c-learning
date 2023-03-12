
#include <stdio.h>
#include <stdlib.h>

// 1. 函数的定义
//      数据类型 函数名(形参说明)
// 2. 函数的传参方式
//      值传递
//      地址传递
//      全局变量传参
// 3. 函数的调用（递归调用和嵌套调用）
// 4. 函数与数组
// 5. 函数与指针

int print_value(int a, int b) {
    printf("%d %d\n", a, b);
    return 0;
}

void swap(int *i, int *j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

int main(int argc, char *argv[]) {
    int i=3, j=5;

    printf("%d\n", argc);
    for(i=1; i<argc; i++){
        printf("%s\n", argv[i]);
    }
    print_value(i, j);
    swap(&i, &j);
    print_value(i, j);
    exit(0);
}