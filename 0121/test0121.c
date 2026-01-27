/*
"p146
1. short?삎怨? long?삎?쓽 ?옄猷뚰삎 ?겕湲곕?? 鍮꾧탳?빐 ?겕?궎媛? ?겙 ?옄猷뚰삎?씠 臾댁뾿?씤吏? 異쒕젰?븯?뒗 ?봽濡쒓렇?옩?씠 ?셿?꽦?릺?룄濡? 鍮덉뭏?쓣 梨꾩슦?꽭?슂"
*/
/*
"p146.
2. 야구경기장의 좌석 수가 70개이고 입장객 수가 65명일 때 입장률을 표시하는 프로그램이 완성되도록 빈칸을 채우세요"
*/

/*
"p147
3. 3.76시간은 몇 시간, 몇 분, 몇 초인지 출력하는 프로그램이 완성되도록 빈칸을 채우세요. "
*/
#include<stdio.h>

int main(void){
    // 1번 문제
    int res;
    res = sizeof(short) > sizeof(long);
    (res == 1) ? (printf("short\n")) : (printf("long\n"));
    // printf("%d", res);
    if(res == 1) printf("short\n"); else printf("long\n");
    
    // 2번 문제
    int seats = 70;
    int audience = 65;
    double rate;
    rate = (double)audience / seats * 100;
    printf("%lf\n", rate);

    // 3번 문제
    int hour, min, sec;
    double time = 3.76;
    hour = (int)time;
    time = time - hour;
    min = (int)(time * 60);
    time = time * 60 - min;
    sec = (int)(time * 60);
    printf("hour = %d\n", hour);
    printf("min  = %d\n", min);
    printf("sec  = %d\n", sec);

    // 4번 문제
    int get_bmi(double weight, double height);
    double weight, height;
    printf("몸무게와 키를 입력 (kg, cm)\n");
    scanf("%lf%lf", &weight, &height);
    // scanf("%lf", &height);
    get_bmi(weight, height);

    return 0;
}

/*
"p148 도전 실전 예제
체중(kg)과 키(cm)를 입력해 BMI(신체질량지수)를 구한 후 BMI의 값이 20.0이상 25미만이면 ""표준입니다.""를 출력하고 그렇지 않으면 ""체중관리가 필요합니다.""를 출력합니다. 
BMI는 표준체중, 저체중, 과체중을 판별하는 수치로 몸무게를 키의 제곱으로 나누어 구합니다. 이때 키는 미터(m)단위로 계산합니다. 

실행결과
몸무게(kg)과 키(cm) 입력 : 66 185.6
체중관리가 필요합니다."
*/
int get_bmi(double weight, double height){
    // float weight, height;
    height /= 100;
    double bmi;
    bmi = weight / (height*height);
    printf("%lf\n", bmi);
    if(bmi >= 25){
        printf("체중관리가 필요합니다.\n");
        return 3;
    } else if (bmi >= 20){
        printf("정상체중입니다.\n");
        return 2;
    } else{
        printf("체중관리가 필요합니다.\n");
        return 1;
    }
}