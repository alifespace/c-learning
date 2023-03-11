#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    int i=0, j=0;
    int *p1=NULL, *p2=NULL;

    p1 = *a;  // p1 = &a[0][0]; p1 = *(a+0)
    if(*a == a[0]) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    // p2 = &a[0][0];

    printf("%p->\n", p1);
    printf("%p->\n", ++p1);

    p1 = *a;
    for(i=0; i<6; i++) {
        printf("%d ", p1[i]);
    }
    printf("\n");

    int (*p3)[3] = a;
    // int[3] (*p3) = a;
    printf("%p %p\n", p3, p3+1);
    exit(0);
}