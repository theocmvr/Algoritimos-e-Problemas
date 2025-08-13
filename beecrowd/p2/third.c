#include<stdio.h>
int main(){
    int N, seq[101], count;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &seq[i]);
    }
    count = 0;
    for (int j = 0; j < N - 2; j++){
        if (seq[j+2] == seq[j+1] + seq[j]){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}