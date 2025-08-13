#include<stdio.h>
int main(){
    int resp[6], try[6], count;
    for (int i = 0; i < 6; i++){
        scanf("%d", &resp[i]);
    }
    for (int i = 0; i < 6; i++){
        scanf("%d", &try[i]);
    }
    count = 0;
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            if (try[i] == resp[j]){
                count++;
            }
        }
    }
    if (count == 3){
        printf("terno\n");
    } else if (count == 4){
        printf("quadra\n");
    } else if (count == 5){
        printf("quina\n");
    } else if (count == 6){
        printf("sena\n");
    } else {
        printf("azar\n");
    }
    return 0;
}