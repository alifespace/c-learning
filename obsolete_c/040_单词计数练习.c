#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[128];
    int count = 0, flag = 0;
    gets(str);
    for(int i=0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t') {
            flag = 0;
        } else if(flag == 0) {
            flag = 1;
            count++;
        }
    }

    printf("Count: %d", count);
    exit(0);
}