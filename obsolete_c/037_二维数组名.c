#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[][3] = {{1, 2, 3}, {4, 5, 6}};

    for(int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("%p --> %d\n", &arr1[i][j], arr1[i][j]);
        }
        printf("\n");
    }

    printf("arr1 address: %p\n", arr1);
    printf("arr1[0] address: %p\n", arr1[0]);
    printf("arr1 second address: %p\n", arr1+1);
    printf("arr1[1] address: %p\n", arr1[1]);
    exit(0);
}