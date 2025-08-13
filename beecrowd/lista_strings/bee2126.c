#include <stdio.h>
#include <string.h>
int main() {
    char N1[11], N2[33], caso;
    int count, pos;
    caso = 1;
    while (scanf("%s", N1) != EOF) {
        getchar();
        scanf("%s", N2);
        int len1 = strlen(N1);
        int len2 = strlen(N2);
        count = 0;
        pos = -1;
        for (int i = 0; i <= len2 - len1; i++) {
            int igual = 1;
            for (int j = 0; j < len1; j++) {
                if (N2[i + j] != N1[j]) {
                    igual = 0;
                    break;
                }
            }
            if (igual) {
                count++;
                pos = i + 1;
            }
        }
        printf("Caso #%d:\n", caso++);
        if (count == 0) {
            printf("Nao existe subsequencia\n\n");
        } else {
            printf("Qtd.Subsequencias: %d\n", count);
            printf("Pos: %d\n\n", pos);
        }
        getchar();
    }
    return 0;
}