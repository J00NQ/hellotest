#include<stdio.h>
void later10(char name[10], int age, double height, char bt[3]);
int main(int argc, char const *argv[])
{
    char name[10] = "홍길동";
    int age = 17;
    double height = 190.0;
    char bt[3] = "AB";

    later10(name, age, height, bt);
    return 0;
}

void later10(char name[10], int age, double height, char bt[3]){
    age += 10;
    height -= 0.5;
    printf("10년 후의 프로필...\n이름:%s\n나이:%d살\n키:%.1lfcm\n혈액형:%s형\n", name, age, height, bt);
}