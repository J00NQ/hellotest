#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int choice;
    // 상품 정보
    char* names[] = {"콜라", "사이다", "커피"};
    int prices[] = {1200, 1000, 800};
    // 금액 투입
    int money;
    scanf("%d", &money);
    // 메뉴 출력
    printf("=== 자판기 ===\n");
    printf("1. %s - %d원\n", names[0], prices[0]);
    printf("2. %s - %d원\n", names[1], prices[1]);
    printf("3. %s - %d원\n", names[2], prices[2]);
    printf("===============\n");
    // 선택 입력
    printf("음료를 선택하세요: ");
    scanf("%d", &choice);
    // 선택 확인
    printf("\n[%s]를 선택하셨습니다. %d원입니다.\n",
           names[choice - 1], prices[choice - 1]);
    return 0;
}
