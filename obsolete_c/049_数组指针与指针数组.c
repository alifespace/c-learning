#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char * p_arr1[5] = {"Follow me", "Basic", "Fortran", "Java", "Computer"};
    char *temp = NULL;
    int i, j;

    for(i=0; i<5; i++) {
        printf("%p>%s\n", p_arr1[i], p_arr1[i]);
    }

    for(i=0; i<4; i++) {
        for(j=i+1; j<5; j++) {
            if(strcmp(p_arr1[i], p_arr1[j]) > 0) {
                temp = p_arr1[i];
                p_arr1[i] = p_arr1[j];
                p_arr1[j] = temp;
            }
        }
        // puts(p_arr1[i]);
    }

    for(i=0; i<5; i++) {
        puts(p_arr1[i]);
    }

    char* arr2 = NULL;
    char (*arr3)[6];

    arr2 = "Hello";
    puts(arr2);
    printf("%s\n", arr2+2);
    printf("%s\n", "Hello Pointer!");
    exit(0);
}