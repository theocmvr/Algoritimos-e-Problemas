#include<stdio.h>
#include<stdlib.h>
int main(){
    int P, N, flag;
    int salto[100];
    scanf("%d %d", &P, &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &salto[i]);
    } 
    flag = 1;
    for (int j = 1; j < N; j++){
        if (abs(salto[j] - salto[j -1]) > P){
            flag = 0;
            break;
        }
    }
    if (flag == 1){
        printf("YOU WIN\n");
    } else {
        printf("GAME OVER\n");
    }
    return 0;
}