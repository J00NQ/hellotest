#include<stdio.h>
#include<string.h>

void strspace(void);
void strnull(void);
void strcp2(void);

int main(void)
{
    // char str[80] = "applejam";

    // printf("최초 문자열: %s\n", str);
    // printf("문자열 입력: ");
    // scanf("%s", str);
    // printf("입력 후 문자열: %s\n", str);

    // char str1[80] = "cat";
    // char str2[80];

    // strcpy(str1, "tiger");
    // strcpy(str2, str1);
    // printf("%s, %s\n", str1, str2);

    // strspace();
    // strnull();
    strcp2();

    return 0;
}

void strspace(void){
    char str[80];

    printf("문자열 입력: ");
    gets(str);
    puts("입력된 문자열: ");
    puts(str);
    
    // return 0;
}

void strnull(void){
    char str[5];

    str[0] = '0';
    str[1] = 'K';
    printf("%s\n", str);
}

void strcp2(void){
    char str1[80], str2[80];
    char temp[80];

    printf("두 문자열 입력: ");
    scanf("%s %s", str1, str2);
    printf("바꾸기 전: %s, %s\n", str1, str2);
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
    printf("바꾼 후: %s, %s\n", str1, str2);

}