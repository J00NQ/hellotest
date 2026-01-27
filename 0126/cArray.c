#include<stdio.h>

int arrSizeof(void);
int array_copy(void);
int main(void)
{
    array_copy();
    // int score[5];
    // int i;
    // int total = 0;
    // double avg;
    // for (i = 0; i < 5; i++){
    //     scanf("%d", &score[i]);
    // }
    // for (i = 0; i < 5; i++){
    //     total += score[i];
    // }
    // avg = total / 5.0;

    // for (i = 0; i < 5; i++){
    //     printf("%5d", score[i]);
    // }
    // printf("\n");

    // printf("avg : %.1lf\n", avg);
}

int arrSizeof(void){
    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);

    for (i = 0; i < count; i++){
        scanf("%d", &score[i]);
    }
    for (i = 0; i < count; i++){
        total += score[i];
    }
    avg = total / 5.0;

    for (i = 0; i < count; i++){
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("avg : %.1lf\n", avg);
    return 0;
}

void arrtest(void){
    int iarr[5];
    double darr[10];
    int arr[3];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    char carr[4];

    int newarr[6] = {1, 2, 3};
}

int array_copy(void){
    int A[3] = {1, 2, 3};
    int B[10];
    int i;
    for (i = 0; i < 10; i++){
        B[i] = A[i%3];
    }

    for (i = 0; i < 10; i++){
        printf("%d", B[i]);
    }
    return 0;
}