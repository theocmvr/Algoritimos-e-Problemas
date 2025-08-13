#include<stdio.h>
int main(){
    int N, R, P, total, novos, dias;
    scanf("%d %d %d", &N, &R, &P);
    total = N;
    dias = 0;
    novos = N;
    while (total < P){
        novos = R*novos;
        total += novos;
        dias++;
    }
    printf("%d\n", dias);
    return 0;
}