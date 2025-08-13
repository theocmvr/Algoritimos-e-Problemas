#include<stdio.h>
#include<string.h>
int main(){
    char inicial[101], final[101];
    while (scanf("%s", inicial) != EOF){
        scanf("%s", final);
        if (strstr(inicial, final)){
            printf("Resistente\n");
        } else {
            printf("Nao resistente\n");
        }
    }
    return 0;
}