#include <stdio.h>
#include <stdlib.h>
// a[i]: a[i] = *(a+i) = *(p+i) = p[i]
// &a[i]: &a[i] = a+i = p+i = &p[i]
int main() {
    int arr1[10] = {0, 1, 2, 3};
    int *p1 = NULL;

    p1 = arr1;
    printf("%d\n", *++p1);
    exit(0);
}