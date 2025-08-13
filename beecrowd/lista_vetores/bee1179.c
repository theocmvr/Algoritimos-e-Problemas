#include<stdio.h>
int main(){
    int par[5], impar[5], n, countpar, countimpar;
    countpar = 0;
    countimpar = 0;
    for (int i = 0; i < 15; i++){
        scanf("%d", &n);
        if (n%2 == 0){
            par[countpar] = n;
            countpar++;
            if (countpar > 4){
                for (int j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                }
                countpar = 0;
            }
        } else {
            impar[countimpar] = n;
            countimpar++;           
            if (countimpar > 4){
                for (int j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                countimpar = 0;
            }            
        }
    }
    for (int i = 0; i < countimpar; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (int i = 0; i < countpar;i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}