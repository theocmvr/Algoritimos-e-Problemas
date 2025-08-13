#include<stdio.h>
int main(){
    int x[5], y[5], flag;
    for (int i = 0; i < 5; i++){
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < 5; i++){
        scanf("%d", &y[i]);
    }
    flag = 0;
    for (int i = 0; i < 5; i++){
        if (x[i] == y[i]){
            flag = 1;
            break;
        } else {
            continue;
        }
    } 
    if (flag == 1){
        printf("N\n");
    } else {
        printf("Y\n");
    }
    return 0;
}