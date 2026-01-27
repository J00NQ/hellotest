/*
#### 문제
자동차 주행시간 측정 프로그램
거리(km)와 속력(km/h)을 입력받은 후에 시간을 계산하여 출력합니다. 단, 다음 조건을 만족하도록 작성합니다.

조건:  
거리와 속력인 입력받는 변수는 int형으로 선언하고 시간, 분을 저장할 변수도 int형으로 선언합니다. 
초는 소수점 이하 셋째 자리까지 출력합니다. 

#### 실행결과
거리와 속력 입력 : 420 65 (Enter)
소요 시가은 6시간 27분.538초입니다.
*/
#include<stdio.h>
int main(void)
{
    int distance, speed, hour, minute;              // 거리, 속력, 시간 변수 int형으로 선언
    double second;                                  // 초는 소수점 이하 셋째 자리까지 -> 실수형으로 선언

    printf("거리와 속력 입력 :");
    scanf("%d%d", &distance, &speed);               // 거리와 속력 입력받아 저장
    // distance = 420, speed = 65;                  // 디버깅용 변수 저장
    double time = (double)distance / speed;         // 시간을 저장하기 위한 변수 time 추가선언, 거리/속력으로 저장
    // printf("%lf", time);                         // 실수형으로 저장 확인

    hour = (int)time;                               // 소수점 뒤를 제외한 시간을 hour에 저장
    time -= hour;                                   // 나머지 시간을 사용하기 위해 hour만큼 차감
    time *= 60;                                     // 분 저장을 위해 시간에 60을 곱함
    minute = (int)time;                             // 시간을 저장했던 것처럼 반복
    time -= minute;
    second = time*60;                               // 초는 시간과 분을 계산한 뒤 나머지에 60을 곱함
    // printf("%lf\n", time);                       // 저장된 시간 확인용 출력문
    printf("소요 시간은 %d시간 %d분 %.3lf초입니다.\n", hour, minute, second);
    return 0;
}
