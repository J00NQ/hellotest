/*
#### 문제
반복적으로 양수를 입력받아 총합을 구하는 프로그램을 작성합니다. 
0이나 음수를 입력하면 반복을 끝내고 그 동안 누적한 합을 출력합니다. 
처음부터 0이나 음수가 입력되면 바로 반복을 끝내고 0을 출력합니다.

#### 실행결과
양수 입력 : 5 (Enter)
양수 입력 : 10 (Enter)
양수 입력 : -1 (Enter)
누적된 값: 15"
*/

#include<stdio.h>
#define MAX_INPUT 255       // 배열 크기를 상수로 선언

int main(void)
{
    int num[MAX_INPUT];     // 배열 크기를 상수로 선언
    int count = 0;          // 입력받은 양수 개수 (조건식에 활용됨)
    int sum = 0;

    while (count < MAX_INPUT) {
        printf("양수 입력: ");
        if (scanf("%d", &num[count]) != 1)      // scanf 입력값 오류 방지
            break;

        if (num[count] <= 0)                    // 입력받은 num배열 count번째 데이터가 0 이하라면 루프 종료
            break;

        count++;                                // 증가식
    }

    for (int i = 0; i < count; i++) {           // 증가시킨 count까지 반복
        sum += num[i];                          // 합계 sum에 num[i] 데이터 더해서 저장
    }

    printf("누적된 값: %d\n", sum);
    return 0;
}
