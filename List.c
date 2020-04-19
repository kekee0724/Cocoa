//
// Created by Cocoa on 2019-03-31.
//
#include <stdio.h>

void fun(int a[], int n, int *max, int *d) {
    int i;
    *max = a[0];
    for (i = 0; i < n; i++) {
        if (*(d+i) > *max) {
            *max = *(d+i);
            //*max = *(a+i);
            //*max = a[i];
            *d = i;
        }
    }
}

int main() {
    int x[] = {100, 2, 90, 69}, max, index;
    int n = 4;//sizeof(x)/ sizeof(int);
    fun(x, n, &max, &index);
    printf("max=%d,index=%d\n", max, index);
    return 0;
}
