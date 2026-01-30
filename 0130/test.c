#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int choice, n;
    // 상품 정보
    char* names[] = {"콜라", "사이다", "커피"};
    int prices[] = {1200, 1000, 800};
    // 금액 변수 선언
    int money = 0;  // 초기금액 및 잔고 변수
    int inMoney;    // 투입금액 변수
    
    while(1){
        // 금액 투입
        printf("금액을 투입해주세요 : ");
        scanf("%d", &inMoney);
        money += inMoney;       // 잔고 += 투입금액
        if(inMoney == 0) break; // 투입금액이 0일 경우 반복 종료
        // 메뉴 출력
        printf("=== 자판기 ===\n");
        if(money >= 1200){
            printf("1. %s - %d원\n", names[0], prices[0]);
            printf("2. %s - %d원\n", names[1], prices[1]);
            printf("3. %s - %d원\n", names[2], prices[2]);
            n = 3;        
        } else if(money >= 1000){
            printf("2. %s - %d원\n", names[1], prices[1]);
            printf("3. %s - %d원\n", names[2], prices[2]);
            n = 2;
        } else if(money >= 800){
            printf("3. %s - %d원\n", names[2], prices[2]);
            n = 1;
        } else continue;        // 투입금액이 800원 미만일 경우 반복문 재실행
        printf("===============\n");
        // printf("1. %s - %d원\n", names[0], prices[0]);
        // printf("2. %s - %d원\n", names[1], prices[1]);
        // printf("3. %s - %d원\n", names[2], prices[2]);
        
        // 선택 입력
        for(int i = 0; i < n; i++){
            
        }
        printf("음료를 선택하세요: ");
        scanf("%d", &choice);
        // 선택 확인
        printf("\n[%s]를 선택하셨습니다. %d원입니다.\n",
            names[choice - 1], prices[choice - 1]);

    }
    printf("이용해주셔서 감사합니다.\n");
    return 0;
}
