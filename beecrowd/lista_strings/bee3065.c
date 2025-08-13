#include <stdio.h>
#include <string.h>
int main() {
    int m, caso = 1;
    int resultado = 0;
    char expressao[1001];
    int i = 0;
    int num = 0;
    char op = '+';
    scanf("%d", &m);
    while (m != 0) {
        scanf("%s", expressao);
        while (expressao[i] != '\0') {
            num = 0;
            while (expressao[i] >= '0' && expressao[i] <= '9') {
                num = num * 10 + (expressao[i] - '0');
                i++;
            }
            if (op == '+') {
                resultado += num;
            } else {
                resultado -= num;
            }
            op = expressao[i];
            if (op == '+' || op == '-') {
                i++;
            }
        }
        printf("Teste %d\n", caso++);
        printf("%d\n\n", resultado);
    }
    return 0;
}