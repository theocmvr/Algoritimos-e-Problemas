#include <stdio.h>
#include <math.h>
double L, K, T1, T2, H;
double nivel_final(double P) {
    double R = P / T1;
    double nivel = 0.0;
    if (R <= K) {
        nivel = R * T1;
    } else {
        double tempo_ate_vazar = L / R;
        if (tempo_ate_vazar >= T1) {
            nivel = R * T1;
        } else {
            double agua_no_vazamento = R * tempo_ate_vazar;
            double tempo_com_vazamento = T1 - tempo_ate_vazar;
            double agua_com_vazamento = (R - K) * tempo_com_vazamento;
            nivel = agua_no_vazamento + agua_com_vazamento;
        }
    }
    if (nivel > L) {
        double perda = K * T2;
        nivel -= perda;
        if (nivel < L) nivel = L;
    }
    return nivel;
}
int main() {
    scanf("%lf %lf %lf %lf %lf", &L, &K, &T1, &T2, &H);
    double low = 0.0, high = 100000.0, mid, F1, F2;
    for (int i = 0; i < 100; i++) {
        mid = (low + high) / 2.0;
        double nivel = nivel_final(mid);
        if (nivel < H)
            low = mid;
        else
            high = mid;
    }
    F1 = high;
    low = 0.0;
    high = 100000.0;
    for (int i = 0; i < 100; i++) {
        mid = (low + high) / 2.0;
        double nivel = nivel_final(mid);
        if (nivel > H)
            high = mid;
        else
            low = mid;
    }
    F2 = low;

    printf("%.9lf %.9lf\n", F1, F2);

    return 0;
}