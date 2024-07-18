#include <stdio.h>
#include <stdlib.h>

#define M   3
#define N   4

void print_arr(int * arr, int n) {
    int i=0;
    printf("%s: %ld\n", __FUNCTION__, sizeof(arr));
    for(i=0; i<n; i++)
        printf("%d ", *(arr+i));
    printf("\n");
}

// 本质与上个函数一样
void print_arr1(int p[], int n) {
    int i=0;
    printf("%s: %ld\n", __FUNCTION__, sizeof(p));
    for(i=0; i<n; i++)
        printf("%d ", *(p+i));
    printf("\n");
}

void reverse_arr1(int * arr, int len) {
    int i = 0, temp=0;
    for(i=0; i<len; i++) {
        if(i < len-1-i) {
            temp=arr[i];
            arr[i] = arr[len-1-i];
            arr[len-1-i] = temp;
        } else {
            return;
        }
    }
    return;
}

void print_arr2(int* p, int row, int col) {
    int i=0, j=0;
    printf("sizeof(p): %ld\n", sizeof(p));
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("%d\t", *(p+i*4+j));
        }
        printf("\n"); 
    }
    return;
}

void print_arr3(int (*p)[N], int row, int col) {
    int i=0, j=0;

    printf("sizeof(p): %ld\n", sizeof(p));
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            printf("%4d ", *(*(p+i)+j));
        }
        printf("\n");
    }
    return;
}

int main() {
    // 一维数组
    int i=0, j=0;
    int arr1[] = {1, 3, 5, 7, 9};

    printf("%s: %ld\n", __FUNCTION__, sizeof(arr1));
    print_arr(arr1, sizeof(arr1) / sizeof(*arr1));
    print_arr1(arr1, sizeof(arr1) / sizeof(*arr1));

    reverse_arr1(arr1, sizeof(arr1) /sizeof(*arr1));
    print_arr(arr1, sizeof(arr1) / sizeof(*arr1));
    
    int arr2[M][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printf("sizeof(a): %ld, sizeof(*a): %ld\n", sizeof(arr2), sizeof(*arr2));
    print_arr2(*arr2, M, N);
    print_arr3(arr2, M, N);
    exit(0);
}
