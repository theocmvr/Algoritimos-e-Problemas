#include<stdio.h>
int main(){
    int N[1000], T, count;
    scanf("%d", &T);
    count = 0;
    for (int i = 0; i < 1000; i++){
        N[i] = count;
        count++;
        if (count == T){
            count = 0;
        }
    }
    for (int j = 0; j < 1000; j++){
        printf("N[%d] = %d\n", j, N[j]);
    }
    return 0;
}