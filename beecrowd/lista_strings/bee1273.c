#include<stdio.h>
#include<string.h>
int main(){
    int n, maior;
    char nome[50][51];
    scanf("%d", &n);
    while (n != 0){
        maior = 0;
        for (int i = 0; i < n; i++){
            getchar();
            scanf("%s", nome[i]);
            if (strlen(nome[i]) > maior){
                maior = strlen(nome[i]);
            }
        }
        for (int i = 0; i < n; i++){
            for (int j = 0; j < (maior - strlen(nome[i])); j++){
                printf(" ");
            }
            printf("%s\n", nome[i]);
        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}