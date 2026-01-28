/*
#### 문제
로또 프로그램
1부터 45까지 수중에 6개의 숫자를 입력하여 출력하는 프로그램을 작성합니다. 
단, 입력하는 중에 이미 입력한 번호와 같은 번호를 입력하면 중복 오류 메시지를 출력하고 새로 입력합니다.
#### 실행결과
로또번호 입력 : 7 (Enter)
로또번호 입력 : 7 (Enter)
같은 번호가 있습니다.!
로또번호 입력 : 9 (Enter)
로또번호 입력 : 15 (Enter)
로또번호 입력 : 20 (Enter)
로또번호 입력 : 33 (Enter)
로또번호 입력 : 20 (Enter)
같은 번호가 있습니다.!
로또번호 입력 : 44 (Enter)
입력된 로또번호: 7 9 15 20 33 44
*/
#include<stdio.h>
int main()
{
    int lotto[6];
    int i = 0;
    while (i < 6)
    {
        int issame = 0;
        printf("로또번호 입력 : ");
        scanf("%d", &lotto[i]);
        if ( 1 > lotto[i] || lotto[i] > 45 ){
            printf("1부터 45까지의 숫자만 입력해주세요.\n");
            continue;
        }
        for (int j = 1; j <= i; j++){
            if (lotto[i] == lotto[i-j]){
                issame = 1;
                break;
            }
        }
        if (issame == 1) {
            printf("같은 번호가 있습니다.!\n");
            continue;
        }
        i++;
    }
    printf("입력된 로또번호 :");
    for (i = 0; i < 6; i++){
        printf(" %d", lotto[i]);
    }
    return 0;
}
