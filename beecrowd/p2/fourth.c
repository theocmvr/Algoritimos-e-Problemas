#include<stdio.h>
#include<string.h>
void inverte(char s[1001], char s2[1001], int N){
    int k = 0;
    for (int i = N - 1; i >= 0; i--){
        s2[k] = s[i];
        k++;
    }
    s2[k] = '\0';
}
int main(){
    int N, met, j;
    char str[1001], inverso[1001];
    scanf("%d", &N);
    scanf("%s", str);
    inverte(str, inverso, N);
    if (strcmp(str, inverso) == 0){
        printf("S\n");
    } else {
        printf("N\n");
    }
    return 0;
}