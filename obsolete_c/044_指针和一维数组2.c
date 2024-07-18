#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int* p1= arr1;
    int i=0;
    int* p2 = (int [3]) {0, 1, 2};

    for(i=0; i<5; i++) {
        printf("arr1: %p -> %d\n", &arr1[i], arr1[i]);
        printf("p1: %p -> %d\n", p1++, *p1);
        // p1++;
    }

    for(i=0; i<3; i++) {
        printf("p2[i]: %p->%d\n", &p2[i], p2[i]);
    }

    exit(0);
}