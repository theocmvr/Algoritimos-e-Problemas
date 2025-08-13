#include<stdio.h>
int main(){
    int n;
    char dir[1001];
    int pos;
    scanf("%d", &n);
    while (n != 0){
        pos = 0;
        for (int i = 0; i < n; i++){
            scanf(" %c", &dir[i]);
            if (dir[i] == 'D'){
                pos++;
            } else {
                pos--;
            }
            if (pos == 4){
                pos = 0;
            }
        }
        pos = (pos % 4 + 4) % 4;
        if (pos == 0){
            printf("N\n");
        } else if (pos == 1){
            printf("L\n");
        } else if (pos == 2){
            printf("S\n");
        } else {
            printf("O\n");
        }
        scanf("%d", &n);
    }
    return 0;
}