#include<stdio.h>
int recallFunc(int n);

int main(void){
    int a = recallFunc(7);
    printf("%d", a);
    return 0;
}

int recallFunc(int n){
    if (n == 0) return 0;
    return n + recallFunc(n - 1);
}