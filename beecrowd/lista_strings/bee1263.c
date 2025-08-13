#include<stdio.h>
#include<string.h>
char para_minuscula(char c) {
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 'a';
    return c;
}
int main() {
    char palavra[51];
    char anterior = '\0';
    int aliteracoes = 0;
    int contando = 0;
    while (scanf("%s", palavra) != EOF) {
        char atual = para_minuscula(palavra[0]);
        if (atual == anterior) {
            if (!contando) {
                aliteracoes++;
                contando = 1;
            }
        } else {
            contando = 0;
        }
        anterior = atual;
        int proximo = getchar();
        if (proximo == '\n' || proximo == EOF) {
            printf("%d\n", aliteracoes);
            anterior = '\0';
            aliteracoes = 0;
            contando = 0;
        }
    }
    return 0;
}