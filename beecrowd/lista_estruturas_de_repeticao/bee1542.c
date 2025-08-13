#include<stdio.h>
int main(){
    int N, valor, teste, i, campeao;
    teste = 1;
    while (scanf("%d", &N), N != 0){
        for (i = 1; i <= N; i++){
            scanf("%d", &valor);
            if (valor == i){
                campeao = valor;
            }
        }
        printf("Teste %d\n", teste++);
        printf("%d\n\n", campeao);    
    }
    return 0;
}