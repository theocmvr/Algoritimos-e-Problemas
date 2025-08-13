#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char linha[51];
    int len, upper;
    while (fgets(linha, 51, stdin)){
        len = strlen(linha);
        upper = 1;
        for (int i = 0; i < len; i++){
            if (linha[i] == ' '){
                printf(" ");
            } else {
                if (upper){
                    printf("%c", toupper(linha[i]));
                } else {
                    printf("%c", tolower(linha[i]));
                }
                upper = !upper;
            } 
        }
    }
    return 0;
}