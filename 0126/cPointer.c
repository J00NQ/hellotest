#include<stdio.h>
void swap(int *pa, int *pb);
void swap2(int x, int y);

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b);
    printf("a:%d, b:%d\n", a, b);
    swap2(a, b);        // 값이 바뀌지 않음
    printf("a:%d, b:%d\n", a, b);
    return 0;


}


    // int a;
    // double b;
    // char c;

    // printf("int형 변수의 주소: %p\n", &a);
    // printf("double형 변수의 주소: %p\n", &b);
    // printf("char형 변수의 주소: %p\n", &c);
    // return 0;

void swap(int* pa, int* pb) {
    int temp;

    temp = *pa;
    *pa = *pb;
    *pb = temp;

}

void swap2(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;

}