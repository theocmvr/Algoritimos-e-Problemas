#include<stdio.h>
int main(){
    int N, C, M, faltam;
    int carimbadas[51];
    int obtidas[301];
    scanf("%d %d %d", &N, &C, &M);
    faltam = C;
    for (int i = 0; i < C; i++){
        scanf("%d", &carimbadas[i]);
    }
    for (int i = 0; i < M; i++){
        scanf("%d", &obtidas[i]);
    }
    for (int i = 0; i < C; i++){
        for (int j = 0; j < M; j++){
            if (carimbadas[i] == obtidas[j]){
                faltam--;
                break;
            }
        }
    }
    printf("%d\n", faltam);
    return 0;
}