#include<stdio.h>
int main(){
    int N[10];
    scanf("%d", &N[0]);
    for (int i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, N[i]);
        N[i+1] = N[i]*2;
    }
    return 0;
}   