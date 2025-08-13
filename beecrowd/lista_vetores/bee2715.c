#include<stdio.h>
int main(){
    int n;
    long long dif, ran, gu, menordif, total;
    int v[1000000];
    while (scanf("%d", &n) != EOF){
        total = 0;
        for (int i = 0; i < n; i++){
            scanf("%d", &v[i]);
            total += v[i];
        }
        ran = 0;
        menordif = total;
        for (int j = 0; j < n; j++){
            ran += v[j];
            gu = total - ran;
            dif = ran - gu;
        if (dif < 0){
            dif = -dif;
        }
        if (dif < menordif){
            menordif = dif;
        }            
        }
        printf("%lld\n", menordif);
    }
    return 0;
}