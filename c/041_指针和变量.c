#include <stdio.h>
#include <stdlib.h>

// 1. 变量和地址: 指针就是地址，
// 2. 指针和指针变量：能够保存指针（地址值）的变量就是指针变量
// 3. 直接访问和间接访问
// 4. 空指针和野指针
// 5. 空类型
// 6. 定义和与初始化的书写规则
// 7. 指针运算
// 8. 指针与数组
//      指针与一维数组
//      指针与二维数组
//      指针与字符数组
// 9. const与指针
// 10. 指针数组与数组指针
//      int (*q)[3] = arr1;
// 11. 多级指针
//      二级指针取*操作，二级制指针变成一级指针

int main() {
    int i=1;
    int * p1 = &i;
    int ** p2 = &p1;
    int *** p3 = &p2;
    float f1 = 3.14;
    float * p4 = &f1;
    float ** p5 = &p4;
    printf("i address: %p -> %d\n", &i, i);
    printf("p3, p2 address: (%p) -> *p3, p1 address: %p -> p1 address: (%p) ->i address: %p -> &i(%p) -> %d\n",
     p3, *p3, p2, *p2, p1, *p1);
    printf("p2(%p), *p2(%p)\n", p2, *p2);
    printf("sizeof p1: %ld\n", sizeof(p1));

    printf("sizeof p4: %ld\n", sizeof(p4));
    printf("sizeof p5: %ld\n", sizeof(p5));
    printf("%d\n", sizeof(long ));

    exit(0);
}