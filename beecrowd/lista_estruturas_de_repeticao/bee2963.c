#include <stdio.h>
int main(){
    int N, otr, bobo, aux;
    scanf("%d", &N);
    scanf("%d", &bobo);
    for (int i = 1; i < N; i++){
        scanf("%d", &otr);
        if (otr > bobo){
            aux = 0;
            printf("N\n");
            break;
        } else {
            aux = 1;
        }
    }
    if (aux == 1){
            printf("S\n");
        }
    return 0;
}