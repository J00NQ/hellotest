#include<stdio.h>

int sum(int num);
int get_num(void);
void print_char(char ch, int count);
void print_line(void);
void fruit(int cnt);
int rec_func(int n);


int main(void)
{
    // sum(1, 2);
    // int result = get_num();
    // printf("반환값 : %d\n", result);
    // print_char('#', 5);
    // print_line();
    // fruit(1);
    // int one2ten = sum(10);
    // printf("%d", one2ten);
    int a = rec_func(10);
    printf("%d", a);
    return 0;
}

int sum(int num){
    int cnt;
    int res = 0;
    for (cnt = 0; cnt < num; cnt++){
        res += cnt;
    }
    return res;
}

int get_num(void){
    int num;
    printf("변수 입력: ");
    scanf("%d", &num);
    return num;
}

void print_char(char ch, int count){
    int i;
    for (i = 0; i < count; i++){
        printf("%c", ch);
    }
    return;
}

void print_line(void){
    int i;
    for (i = 0; i < 50; i++){
        printf("-");
    }
    printf("\n");
}

void fruit(int cnt){
    printf("apple\n");
    
    if (cnt == 3) return;
    fruit(cnt + 1);
}

int rec_func(int n){
    if (n == 0) return n;
    return n + rec_func(n-1);
}