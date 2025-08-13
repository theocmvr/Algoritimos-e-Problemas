#include<stdio.h>
int main(){
    int N, esc[1001], tot, dif, atual;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &esc[i]);
    }
    dif = esc[1] - esc[0];
    tot = 1;
    for (int j = 2; j < N ; j++){
        atual = esc[j] - esc[j - 1];
        if (atual != dif){
            tot++;
            dif = atual;
        }
    }
    printf("%d\n", tot);
    return 0;
}