#include<stdio.h>

char chest_size(int chest);
int per3(void);
int simple_calc(void);
int second_calc(void);

int main(void){

    // chest_size(90);
    // per3();
    // simple_calc();
    second_calc();
    return 0;
}

char chest_size(int chest){
    char size;
    if (chest <= 90){
        size = 'S';
    } else if (90 < chest <= 100){
        size = 'M';
    } else{
        size = 'L';
    }
    printf("%c\n", size);
    return size;
}

int per3(void){
    int n;
    scanf("%d", &n);
    switch (n % 3)
    {
    case 0:
        printf("False\n");
        break;
    default:
        printf("True\n");
        break;
    }
    return n;
}

int simple_calc(void){
    int num1, num2, calc_type, result;
    printf("첫번째 수를 입력하세요:\n");
    scanf("%d", &num1);
    printf("연산 방식 선택(1:더하기, 2:빼기, 3:곱하기, 4:나누기):\n");
    scanf("%d", &calc_type);
    printf("두번째 수를 입력하세요:\n");
    scanf("%d", &num2);
    if (calc_type == 1){
        result = num1 + num2;
    } else if (calc_type == 2){
        result = num1 - num2;
    } else if (calc_type == 3){
        result = num1 * num2;
    } else if (calc_type == 4){
        result = num1 / num2;
    } else
        return 0;
    printf("%d", result);
    return result;
}

int second_calc(void){
    int num1, num2, result;
    char calc_type;
    printf("사칙연산 입력:");
    scanf("%d %c %d", &num1, &calc_type, &num2);
    // scanf("%c", &calc_type);
    // scanf("%d", &num2);
    if (calc_type == '+'){
        result = num1 + num2;
    } else if (calc_type == '-'){
        result = num1 - num2;
    } else if (calc_type == '*'){
        result = num1 * num2;
    } else if (calc_type == '/'){
        result = num1 / num2;
    } else
        return 0;
    printf("%d %c %d = %d\n", num1, calc_type, num2, result);
    return result;
}