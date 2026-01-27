#include <stdio.h>

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

int main(void)
{
    int input;                                  // scanf로 입력받을 값을 저장할 변수 선언
    int sum = 0;                                // 합계를 저장할 변수 선언

    while (1) {
        printf("양수 입력: ");
        scanf("%d", &input);

        if (input <= 0)                         // 0이나 음수 입력시 즉시 while루프 탈출
            break;

        sum += input;                           // 탈출하지 않았을 경우 합계에 입력값 더해서 저장
    }

    printf("누적된 값: %d\n", sum);
    return 0;
}
