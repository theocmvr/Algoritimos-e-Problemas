#include<stdio.h>
int main(){
    int N, M, num;
    int cartas[101] = {0};
    int faltando = 0;
    scanf("%d\n%d", &N, &M);
    for (int i = 0; i < M; i++){
        scanf("%d", &num);
        cartas[num] = 1;
    }
    for (int j = 1; j <= N; j++){
        if(cartas[j] == 0){
            faltando++;
        }
    }
    printf("%d\n", faltando);
    return 0;
}