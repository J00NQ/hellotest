#include<stdio.h>
int main(void){
    int n, m, i;
    scanf("%d%d", &n, &m);
    int arr[5];
    for(i=0;i<n;i++) arr[i] = i+1;
    int j, k;
    for(i=0;i<m;i++){
        scanf("%d%d", &j, &k);
        j += 1;
        for(j;j<=k;j++){
            if(k-j == j) break;
            int temp = arr[j];
            arr[j] = arr[k-j];
            arr[k-j] = temp;
        }
    }
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}