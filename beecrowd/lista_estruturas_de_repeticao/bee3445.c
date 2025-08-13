#include<stdio.h>
int main (){
    int N, H, W;
    char ida, volta, sim, nao;
    sim = 'Y';
    nao = 'N';
    scanf("%d %d %d", &N, &H, &W);
    for (int i = 0; i < N; i++){
        getchar();
        scanf("%c %c", &ida, &volta);
        if (ida == 'Y' || W == 0){
            printf("Y ");
            H--;
            W++;
            if (volta == 'Y' || H == 0){
                printf("Y\n");
                W--;
                H++;
            } else {
                printf("N\n");
            }
        } else {
            printf("N ");
            if (volta == 'Y' || H == 0){
                W--;
                H++;
                printf("Y\n");
            } else {
                printf("N\n");
            }
        }
    }
    return 0;
}