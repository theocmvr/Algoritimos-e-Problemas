#include<stdio.h>
int main(){
    int N, x;
    int freq[2001] = {0};
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &x);
        freq[x]++;
    }
    for (int j = 0; j <= 2000; j++){
        if (freq[j] > 0){
            printf("%d aparece %d vez(es)\n", j, freq[j]);
        }
    }
    return 0;
}