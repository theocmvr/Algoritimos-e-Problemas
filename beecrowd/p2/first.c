#include<stdio.h>
int main(){
    int P, B, D;
    scanf("%d %d %d", &P, &D, &B);
    if (P + 2*D + 3*B >= 150){
        printf("B\n");
    } else if (P + 2*D +3*B >= 120){
        printf("D\n");
    } else if (P + 2*D + 3*B >= 100){
        printf("P\n");
    } else {
        printf("N\n");
    }
    return 0;
}