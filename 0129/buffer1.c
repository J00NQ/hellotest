/*
 * [쉬움] 버퍼 연습 문제 1
 *
 * 문제: 이름(문자 1개)과 나이(숫자)를 입력받아 출력하세요.
 *
 * 예상 출력:
 * ---------------------
 * 이름 첫 글자 입력 : K
 * 나이 입력 : 25
 * 이름: K, 나이: 25
 * ---------------------
 *
 * 조건:
 * - 이름은 getchar()로 입력
 * - 나이는 scanf()로 입력
 * - 입력 순서: 이름 먼저, 나이 나중
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int name;   // 이름 첫 글자
    int age;    // 나이

    // 여기에 코드를 작성하세요
    printf("이름 첫 글자 입력 : ");

    // TODO: 이름 입력 (getchar 사용)
    name = getchar();
    // TODO: 버퍼 비우기 필요할까요?

    printf("나이 입력 : ");

    // TODO: 나이 입력 (scanf 사용)
    scanf("%d", &age);
    
    printf("이름: %c, 나이: %d\n", name, age);

    return 0;
}