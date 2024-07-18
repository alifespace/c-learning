#include <stdio.h>
#include <stdlib.h>

int min(int i, int j, int k) {
    int temp = i < j ? i : j;
    return temp < k ? temp : k;
}

int max(int i, int j, int k) {
    int temp = i > j ? i : j;
    return temp > k ? temp : k;
}

int dist(int a, int b, int c) {
    return max(a, b, c) - min(a, b, c);
}

int main() {
    int a=5, b=3, c=10;

    int v_min = min(a, b, c);
    int v_max = max(a, b, c);

    // int v_min = a;
    // int max = 
    int res = dist(a, b, c);

    printf("%d\n", res);
    printf("%s\n", __FUNCTION__);
    return 0;
}