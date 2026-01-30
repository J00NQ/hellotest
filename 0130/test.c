#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
예정사항
- 입력값 검증 로직 추가
- 하드코딩된 금액비교 부분 개선
*/
int main(void){
    int choice;
    // 상품 정보
    char* names[] = {"콜라", "사이다", "커피"};
    int prices[] = {1200, 1000, 800};
    // 금액 변수 선언
    int money = 0;  // 초기금액 및 잔고 변수
    int inMoney;    // 투입금액 변수
    
    while(1){
        // 금액 투입
        printf("금액을 투입해주세요(-1 입력시 이용종료) : ");
        scanf("%d", &inMoney);
        if(inMoney == -1) break; // 투입금액이 -1일 경우 반복 종료
        money += inMoney;        // 잔고 += 투입금액
        // 메뉴 출력
        printf("=== 자판기 ===\n");
        printf("현재 잔액: %d원\n", money);
        if(money >= 1200){       // 현재 상품 종류가 적어 하드코딩하였지만 가격대별 배열로 처리 가능
            printf("1. %s - %d원\n", names[0], prices[0]);
            printf("2. %s - %d원\n", names[1], prices[1]);
            printf("3. %s - %d원\n", names[2], prices[2]);      
        } else if(money >= 1000){
            printf("2. %s - %d원\n", names[1], prices[1]);
            printf("3. %s - %d원\n", names[2], prices[2]);
        } else if(money >= 800){
            printf("3. %s - %d원\n", names[2], prices[2]);
        } else continue;        // 투입금액이 800원 미만일 경우 반복문 재실행
        printf("===============\n");

        
        // 선택 입력
        while(1){
            printf("음료를 선택하세요: ");
            scanf("%d", &choice);
            if(prices[choice - 1] > money) {
                printf("다른 메뉴를 선택해주세요.\n");
                continue;
            }
            else break;
        }        
        // 선택 확인
        printf("\n[%s]를 선택하셨습니다. %d원입니다.\n",
            names[choice - 1], prices[choice - 1]);
        money -= prices[choice - 1];
        printf("현재 잔액 : %d원\n", money);
    }
    printf("이용해주셔서 감사합니다. 거스름돈: %d원\n", money);
    return 0;
}
