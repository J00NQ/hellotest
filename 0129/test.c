#include <stdio.h>
int main(void) {
    int num[9];
    int max = 0;
    for(int i = 0; i < 9; i++){
        scanf("%d", &num[i]);
        if(num[i] > num[max]){
            max = i;
        }
    }
    printf("%d\n%d", num[max], max);
}