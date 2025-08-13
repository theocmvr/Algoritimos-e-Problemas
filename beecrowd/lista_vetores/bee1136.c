#include<stdio.h>
#include<stdlib.h>
int main(){
    int N, B, dif, flag;
    int bolas[91];
    scanf("%d %d", &N, &B);
    while (N != 0 && B != 0){
        int difs[91] = {0};
        for (int i = 0; i < B; i++){
            scanf("%d", &bolas[i]);
        }
        for (int j = 0; j < B - 1; j++){
            for (int z = 0; z < B; z++){
                dif = abs(bolas[j] - bolas[z]);
                if (dif <= N){
                    difs[dif] = 1;
                }
            }
        }
        flag = 0;
        for (int w = 1; w <= N; w++){
            if(difs[w] == 0){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            printf("Y\n");
        } else {
            printf("N\n");
        }       
        scanf("%d %d", &N, &B); 
    }
    return 0;
}