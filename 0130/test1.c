#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
#####예정사항#####
- 다른 결제방식 작성
*/
int card(void);
int main(void){
    int choice;
    // 상품 정보
    char* names[] = {"콜라", "사이다", "커피"};
    int prices[] = {1200, 1000, 800};
    int stock[] = {5, 4, 3};                 // 재고 배열 추가
    int length;
    length = sizeof(names) / sizeof(names[0]);
    // 금액 변수 선언
    int money = 0;  // 초기금액 및 잔고 변수
    int inMoney;    // 투입금액 변수

    while(1){
        // 금액 투입
        printf("금액을 투입해주세요(-1 입력시 이용종료) : ");
        // 입력값 검증 로직 추가
        int check;           // 입력값 검증용 변수
        inMoney = 0;
        
        check = scanf("%d", &inMoney);
        if(check != 1 || inMoney < -1){
            printf("올바른 금액을 입력해주세요.\n");
            getchar();           // 잘못된 자료형 입력에 대한 버퍼 초기화
            continue;            // 잔고에 추가하기 전에 반복문 재실행
        }
        if(inMoney == -1) break; // 투입금액이 -1일 경우 반복 종료
        money += inMoney;        // 잔고 += 투입금액
        // 메뉴 출력
        printf("=== 자판기 ===\n");
        printf("현재 잔액: %d원\n", money);
        for(int j = 0; j < length; j++){
            if(money >= prices[j]){                 // 주의: 메뉴의 가격이 내림차순 정렬일 것
                for(int i = j; i < length; i++){
                    if(stock[i] > 0){
                        printf("%d. %s \t| %d원 \t| 재고: %d개\n", i+1, names[i], prices[i], stock[i]);
                    }
                }
                break;
            }
        }
        printf("===============\n");
        
        // 선택 입력
        int reMoney = 0;
        while(1){
            printf("음료를 선택하세요(-1 입력시 금액 투입 단계로 돌아갑니다.) : ");
            check = scanf("%d", &choice);
            if(choice == -1) {
                reMoney = 1;
                break;
            }
            if(check != 1 || choice < 1 || choice > length){
                getchar();
                continue;
            }
            if(prices[choice - 1] > money || stock[choice - 1] <= 0) {       // 잔액과 재고 체크
                printf("다른 메뉴를 선택해주세요.\n");
                continue;
            }
            else break;
        }
        if(reMoney == 1) continue;
        // 선택 확인
        printf("\n[%s]를 선택하셨습니다. %d원입니다.\n",
            names[choice - 1], prices[choice - 1]);
        stock[choice - 1]--;
        money -= prices[choice - 1];
        printf("현재 잔액 : %d원\n", money);
        // 모든 재고가 0이면 자동으로 종료
        int remain_stock = 0;
        for(int i = 0; i < length; i++){
            remain_stock += stock[i];
        }
        if(remain_stock == 0) break;
    }
    printf("이용해주셔서 감사합니다. 거스름돈: %d원\n", money);
    return 0;
}
