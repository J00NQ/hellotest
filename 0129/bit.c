#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a = 12;     // 1100
    int b = 10;     // 1010

    printf("%d\n", a&b);    // 1000
    printf("%d\n", a|b);    // 1110
    printf("%d\n", a^b);    // 0110

    int x = 1;              // 00000001
    printf("%d\n", x << 4); // 00010000
    printf("%d\n", 16 >> 2);// 00000100

    unsigned char value = 0b10100101;
    value |= (1 << 1);    //10100111
    value &= ~(1 << 2);   //10100011
    return 0;
}


