#include<stdio.h>
#include<string.h>
int main(){
    int count, aux, espacos;
    float media;
    char letra;
    char frase[1001];
    scanf("%c", &letra);
    getchar();
    scanf("%[^\n]", frase);
    count = 0;
    aux = 0;
    espacos = 0;
    for (int i = 0; i < strlen(frase); i++){
        if (frase[i] == letra){
            count++;
        }
        if (frase[i] == ' ' || i == strlen(frase) - 1){
            if (count > 0){
                aux++;
            }
            count = 0;
            if (frase[i] == ' '){
                espacos++;
            }
        }
    }
    media = 100*((float)aux/ (float)(espacos + 1));
    printf("%.1f\n", media);
    return 0;
}