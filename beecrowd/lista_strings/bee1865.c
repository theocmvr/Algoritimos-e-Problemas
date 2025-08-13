#include<stdio.h>
#include<string.h>
int main(){
    int n, forca;
    char heroi[15];
    char certo[15] = "Thor";
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%s %d", heroi, &forca);
        if (strcmp(heroi, certo) == 0){
            printf("Y\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}