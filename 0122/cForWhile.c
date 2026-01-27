#include<stdio.h>

int star(void);
int star_hardcode(void);
void sosu(int num);
void isprime(int num);
int main(void){
    // star();
    isprime(100);
    // int k = 0;
    // while (k < 3){
    //     int i;
        
    //     for(i = 0; i < 10; i++){
    //         for(int j = 0; j < i; j++){
    //             printf("*");
    //         }
    //         printf("\n");
    //     }
    //     for(i; i > 0; i--){
    //         for(int j = 1; j < i; j++){
    //             printf("*");    
    //         }
    //         printf("\n");
    //     }
    //     k++;

    // }
    return 0;
}

int star_hardcode(void){
    for (int i = 0; i < 5; i++){
        if (i == 0||i == 4)
            printf("*   *");
        else if (i == 1 || i == 3)
            printf(" * * ");
        else if (i == 2)
            printf("  *  ");
        printf("\n");   
    }
    return 0;
}

int star(void){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (j == i || j == 4 - i) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

// 입력받은 수(n)를 m으로 나누어떨어지면 루프 탈출 (n % m == 0)     m은 2부터 증가, n루프 내에서
// for (int m = 2; m < n; m++){
//     
//     if ( n % m == 0 )
//         printf("%d", n);
//         break;
//     for (int o = 0; o < 5; o++)
//         printf("\n");
// }

void isprime(int num){
    int cnt = 0;
// 2부터 입력값까지 반복
    for (int i = 2; i <= num; i++){
        int isPrime = 1;
// 2부터 i-1까지 반복, 나누어떨어지는 수가 나오면 isPrime에 0 저장
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                isPrime = 0;
                break;
            }
        }
// 루프를 다 돌고 나서도 isPrime이 1이면 i를 출력, cnt 증가
        if (isPrime){
            printf("%5d ", i);
            cnt++;
// cnt가 5로 나누어떨어지면(5의 배수면) 줄바꿈
            if (cnt % 5 == 0)
                printf("\n");
        }
    } 
}
/*
입력받은 값이 100이라고 가정
나눠지는 수를 2부터 100까지 증가
    나누는 수를 2부터 99까지 증가하며 소수판별
        소수의 경우는 출력하고 출력이 5개가 되면 줄바꿈
*/
void sosu(int num){
    // scanf("%d", &num);
    int j;
    for (int i = 2; i <= num; i++){
        for (j = 2; j < i; j++){        // 5踰? 異쒕젰留덈떎 以꾨컮轅?

        }

        
    }
    
}