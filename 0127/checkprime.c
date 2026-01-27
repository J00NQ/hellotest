/*문제
32767이 소수(prime number)인지 아닌지를 판단하여 출력하는 프로그램을 작성합니다. 
단, 정수를 인수로 받아 소수면 1을 반환하고 소수가 아니면 0을 반환하는 함수를 만들고 main 함수에서 호출하여 작성합니다. 
함수명은 prime_check로 합니다. 
#실행결과 
소수가 아닙니다.
*/
#include<stdio.h>
int prime_check(int num);      // 정수를 인수로 받는 함수 원형 선언
int main(void){
    prime_check(32767);        // prime_check에 32767을 인자로 호출
    prime_check(19);        // prime_check에 19를 인자로 호출

    return 0;
}

int prime_check(int num){
    int i;
    for (i = 2; i < num; i++){              // 인자로 넘긴 수를 2부터 num-1까지 나누어 나누어떨어지면 return 0
        if (num % i == 0){
            printf("소수가 아닙니다.\n");
            return 0;
        }
    }
    printf("%d: 소수입니다.\n", num);         // for루프를 모두 돌았는데도 약수가 없으면 return 1
    return 1;
}