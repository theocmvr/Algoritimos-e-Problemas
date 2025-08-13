#include <stdio.h>
int main(){
    int J, R, pontos[500] = {0}, ponto, vencedor;
    scanf("%d %d", &J, &R);
    for (int i = 0; i < J*R; i++){
        scanf("%d", &ponto);
        pontos[i % J] += ponto;
    }
    vencedor = 0;
    for (int i = 1; i <= J; i++){
        if (pontos[i] >= pontos[vencedor]){
            vencedor = i;
        }
    }
    printf("%d\n", vencedor + 1);
    return 0;
}