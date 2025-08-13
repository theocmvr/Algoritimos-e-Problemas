#include<stdio.h>
int main() {
    int t;
    char op;
    float m[12][12];
    float soma;
    scanf("%c", &op);
    soma = 0.0;
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%f", &m[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 11 - i; j++) {
            soma += m[i][j];
        }
    }
    if (op == 'S'){
        printf("%.1f\n", soma);
    } else {
        printf("%.1f\n", (soma/30.0));
    }
    return 0;
}