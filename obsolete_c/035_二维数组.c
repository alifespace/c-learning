#include <stdio.h>
#include <stdlib.h>

#define M 2
#define N 3

int main() {
    // 数组的元素类型是一致的，存储空间连续
    // 数组类型：一维数组、二维数组、字符数组
    // 2. 二维数组
    //  定义：[存储类型] 数据类型 数组名[行下标][列下标]
    //  初始化：没有初始化的时候，数组元素是随机值。可以不初始化（随机值）、全部初始化、部分初始化(未初始化的为0)
    //      如果是静态数组，自动初始化为0
    //  元素引用：数组名[行标][列表]
    //  存储形式：顺序存储，按行存储
    //  深入理解二维数组：
    //      1. 数组名：数组名是表示第一个数组元素地址常量，表示数组的起始位置

    int arr1[M][N] = {0};
    int i, j;

    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            printf("arr1[%d][%d] = %d \t\t", i, j, arr1[i][j]);
        }
        printf("\n");
    }


    printf("\n\n**************二维数组**************\n");
    int arr2[M][N] = {{1, 2, 3}, {4, 5, 6}};
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            printf("arr2[%d][%d] = %d \t\t", i, j, arr2[i][j]);
        }
        printf("\n");
    }

    printf("\n\n*****************二维数组赋值***********\n");
    int arr3[][3] = {1, 2, 3, 4, 5};    // 只有行号可以省略，列号不可以省略
    for(i=0; i<M; i++) {
        for(j=0; j<N; j++) {
            printf("arr3[%d][%d] = %d \t\t", i, j, arr3[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<M; i++) {
        printf("arr3[%d] address: %p\n", i, arr3[i]);
        for(j=0; j<N; j++) {
            printf("%p --> %d\n", &arr3[i][j], arr3[i][j]);
        }
        printf("\n");
    }


    printf("\n\n***************行列互换****************\n");
    int arr4[2][3] = {1, 2, 3, 4, 5, 6}, arr5[3][2];
    int temp;
    printf("原始数组arr4: \n");
    for(i=0; i<2; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", arr4[i][j]);
            arr5[j][i] = arr4[i][j]; 
        }
        printf("\n");
    }

    printf("转置后的数组arr5: \n");
    for(i=0; i<3; i++) {
        for(j=0; j<2; j++) {
            printf("%d ", arr5[i][j]);
        }
        printf("\n");
    }
    exit(0);
}