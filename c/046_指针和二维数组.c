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

    char * str1[5] = {"Hello", "Java", "Word", "US", "China"};
    for(i=0; i<5; i++) {
        // printf("%p -> %s\n", str1+i, *(str1+i));
        printf("%p -> %p\n", str1+i, *(str1+i));
        printf("%p -> %s\n", str1[i], str1[i]);
    }
    str1[0] = "This is a Test";
    for(i=0; i<5; i++) {
        printf("%p -> %s\n", str1[i], str1[i]);
    }

    char *p4 = NULL;
    char arr2[5][15] = {"Hello", "Java", "World", "US", "China"};
    p4 = *(arr2);
    for(i=0; i<5; i++) {
        printf("%p\n", arr2[i]);
        p4 = *(arr2+i);
        // p4 = (char *) arr2[i];   此种写法也可以
        printf("%p->%s\n", p4, p4);
    }
    exit(0);
}