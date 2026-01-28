/*
#### 문제
몫과 나머지 입력 프로그램
키보드로 입력한 양수를 4로 나누어 몫과 나머지를 변수에 저장하는 함수를 만듭니다. 
다음 main 함수와 실행결과를 참고하여 작성합니다. 

#### main함수
int main(void)
{
     int mod, rem;
     func(&mod, &rem);
     printf(""몫 : %d, 나머지 : %d"", mod, rem);

     return 0;
}

#### 실행결과 
양수 입력 : 9
몫: 2, 나머지 : 1
*/
#include<stdio.h>
void func(int *mod, int *rem);
int main(int argc, char const *argv[])
{
    int mod, rem;
    func(&mod, &rem);
    printf("몫 : %d, 나머지 : %d", mod, rem);

    return 0;
}
// 인수가 &mod, &rem이었기에 포인터를 받도록 작성
void func(int *mod, int *rem){
    int num;
    // 양수를 입력받기 위해 do-while 사용
    do {
        printf("양수 입력 : ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("입력값 확인\n");
        }
    } while (num <= 0);
    
    *mod = num / 4;
    *rem = num % 4;
}