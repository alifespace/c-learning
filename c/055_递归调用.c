#include <stdio.h>
#include <stdlib.h>
long int factorial(int i) {
    if(i==1 || i==0) {
        return 1;
    } else if(i > 0){
        return i*factorial(i-1);
    } else if(i < 0){
        return 0;
    }
}

long int fabo(int i) {
    if (i == 1 || i == 2){
        return 1;
    } else if(i > 0) {
        return fabo(i-1) + fabo(i-2);
    } else if (i < 0){
        return 0;
    }
}

int main() {
    int i=0;
    long int result=1;

    printf("请输入待阶乘的数：");
    scanf("%d", &i);
    result = factorial(i);
    printf("%d的阶乘为：%ld\n", i, result);

    printf("请输入斐波那契数列的数：");
    scanf("%d", &i);
    result = fabo(i);
    for(int j=1; j<=i; j++) {
        printf("%ld ", fabo(j));
    }
    printf("\n");

    exit(0);
}