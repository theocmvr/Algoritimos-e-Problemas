#include <stdio.h>
void seq(long long a[61]){
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i <= 60; i++){
        a[i] = a[i-1] + a[i-2];
    }
}
int main(){
    int n, pos;
    long long fib[61];
    scanf("%d", &n);
    seq(fib);
    for (int j = 0; j < n; j++){
        scanf("%d", &pos);
        printf("Fib(%d) = %lld\n", pos, fib[pos]);
    }
    return 0;
}