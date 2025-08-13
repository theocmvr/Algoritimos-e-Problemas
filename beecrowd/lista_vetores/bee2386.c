#include<stdio.h>
int main(){
    int A, N, F, str;
    scanf("%d\n%d", &A, &N);
    str = 0;
    for (int i = 0; i < N; i++){
        scanf("%d", &F);
        if (F*A >= 40000000){
            str++;
        } else {
            continue;
        }
    }
    printf("%d\n", str);   
    return 0;
}