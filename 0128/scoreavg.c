/*
#### 문제
다섯 명의 심사위원 점수를 입력하여 유효점수와 평균을 출력하는 프로그램을 작성합니다. 
유효점수는 최고점과 최저점을 제외한 점수 이며 평균은 유효점수로 계산합니다.

#### 실행결과 
5명 심사위원의 점수 입력 : 7 9 4 8 5 
유효점수: 7 8 5 
평균 : 6.7 
*/
#include<stdio.h>
float get_avg(int v_score[3]);
int main()
{
    int score[5];         // 디버깅용 값 초기화
    // = {7, 9, 4, 8, 5};
    printf("5명 심사위원의 점수 입력: ");
        for (int i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
    }
    int i;
    int temp = 0;
    // 버블 정렬로 score 오름차순 정렬
    for(i = 0; i < 4; i++){
        for (int j = 0; j < 4 - i; j++){
            if (score[j] > score[j+1]){
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }
        }
    }
        // 최고점수와 최저점수를 제외하여 저장할 valueable_score 선언
    int v_score[3];
    for (int i = 0; i < 3; i++) {
        v_score[i] = score[i + 1]; // score[1], score[2], score[3]
    }
    printf("유효점수: %d %d %d\n", v_score[0], v_score[1], v_score[2]);
    float avg = get_avg(v_score);
    printf("평균: %.1lf", avg);
    return 0;
}

float get_avg(int v_score[3]){
    float total = 0;

    for (int i = 0; i < 3; i++){
        total += v_score[i];
    }   
    return total / 3;
}
