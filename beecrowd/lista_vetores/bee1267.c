#include <stdio.h>
int main() {
    int N, D;
    while (1) {
        scanf("%d %d", &N, &D);
        if (N == 0 && D == 0)
            break;
        int presenca[100] = {0};
        for (int i = 0; i < D; i++) {
            for (int j = 0; j < N; j++) {
                int x;
                scanf("%d", &x);
                if (x == 1)
                    presenca[j]++;
            }
        }
        int achou = 0;
        for (int i = 0; i < N; i++) {
            if (presenca[i] == D) {
                achou = 1;
                break;
            }
        }
        if (achou)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}