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
// float get_avg(int v_score[3]);
// int main()
// {
//     int score[5];         // 디버깅용 값 초기화
//     // = {7, 9, 4, 8, 5};
//     printf("5명 심사위원의 점수 입력: ");
//         for (int i = 0; i < 5; i++) {
//         scanf("%d", &score[i]);
//     }
//     int i;
//     int temp = 0;
//     // 버블 정렬로 score 오름차순 정렬
//     for(i = 0; i < 4; i++){
//         for (int j = 0; j < 4 - i; j++){
//             if (score[j] > score[j+1]){
//                 temp = score[j];
//                 score[j] = score[j+1];
//                 score[j+1] = temp;
//             }
//         }
//     }
//         // 최고점수와 최저점수를 제외하여 저장할 valueable_score 선언
//     int v_score[3];
//     for (int i = 0; i < 3; i++) {
//         v_score[i] = score[i + 1]; // score[1], score[2], score[3]
//     }
//     printf("유효점수: %d %d %d\n", v_score[0], v_score[1], v_score[2]);
//     float avg = get_avg(v_score);
//     printf("평균: %.1lf", avg);
//     return 0;
// }

// float get_avg(int v_score[3]){
//     float total = 0;

//     for (int i = 0; i < 3; i++){
//         total += v_score[i];
//     }   
//     return total / 3;
// }

int main(void) {
    int score[5];
    int max, min;

    printf("5명 심사위원의 점수 입력: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
    }

    max = score[0];
    min = score[0];

    for (int i = 1; i < 5; i++) {
        if (score[i] > max) max = score[i];
        if (score[i] < min) min = score[i];
    }

    // 유효점수 출력, 평균 계산
    printf("유효점수: ");
    float total = 0;
    for (int i = 0; i < 5; i++) {
        if (score[i] != max && score[i] != min) {
            printf("%d ", score[i]);
            total += score[i];
        }
    }
    float avg = total / 3;
    printf("\n");

    printf("평균: %.1f\n", avg);

    return 0;
}


// 기존 코드 기반으로 chatgpt 사용하여 최적화된 코드 (참고용)
// int main(void) {
//     int score[5];
//     int v_score[3];  // 유효점수 저장
//     int max, min;
//     int sum = 0;
//     int v_index = 0; // 유효점수 인덱스

//     printf("5명 심사위원의 점수 입력: ");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &score[i]);
//     }

//     // 초기값 설정
//     max = score[0];
//     min = score[0];
//     sum = score[0];

//     // 나머지 점수 처리
//     for (int i = 1; i < 5; i++) {
//         if (score[i] > max) max = score[i];
//         if (score[i] < min) min = score[i];
//         sum += score[i];
//     }

//     // 유효점수 저장 (최고점, 최저점 제외)
//     for (int i = 0; i < 5; i++) {
//         if (score[i] != max && score[i] != min) {
//             v_score[v_index++] = score[i];
//         }
//     }

//     // 유효점수 출력
//     printf("유효점수: %d %d %d\n", v_score[0], v_score[1], v_score[2]);

//     // 평균 계산
//     float avg = 0;
//     for (int i = 0; i < 3; i++) avg += v_score[i];
//     avg /= 3.0;

//     printf("평균: %.1f\n", avg);

//     return 0;
// }
