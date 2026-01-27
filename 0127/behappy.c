/*
#### 문제
빈 칸이 포함된 문자열 "Be happy!"를 저장할 가장 작은 char형 배열을 선언하고 키보드로부터 입력하는 코드를 작성합니다.
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];       // 9글자+널문자

    // gets() 사용 (공백, 특수문자 입력 가능)
    printf("Be happy!를 입력하세요.\n");
    gets(str);          // 공백 포함하여 입력받음
    puts(str);          // str 출력

    // scanf() 사용 (공백 입력시 저장)
    printf("Be happy!를 입력하세요.\n");
    scanf("%s", str);   // 비교를 위한 scanf()사용
    // printf("%s\n", str);  // str 출력
    puts(str);          // str 출력
    return 0;
}
