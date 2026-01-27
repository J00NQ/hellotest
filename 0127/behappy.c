/*
#### 문제
빈 칸이 포함된 문자열 "Be happy!"를 저장할 가장 작은 char형 배열을 선언하고 키보드로부터 입력하는 코드를 작성합니다.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    gets(str);
    printf("%s", str);
    return 0;
}
