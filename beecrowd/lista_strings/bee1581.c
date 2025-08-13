#include<stdio.h>
#include<string.h>
int main(){
    int N, K, aux, i, j, w, k;
    char lingua[101][21];
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d", &K);
        for (j = 0; j < K; j++){
            getchar();
            scanf("%s", lingua[j]);
        }
        aux = 1;
        for (w = 1; w < K ; w++){
             if (strcmp(lingua[w],lingua[0]) != 0){
                aux = 0;
                break;
            }
        }
        if (aux){
            printf("%s\n", lingua[0]);
        } else {
            printf("ingles\n");
        }        
    }
    return 0;
}  