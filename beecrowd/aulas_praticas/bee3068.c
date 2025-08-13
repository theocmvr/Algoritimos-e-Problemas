#include<stdio.h>
int main(){
    int x1, y1, x2, y2, n, mx, my, teste, cairam;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    teste = 0;
    while(x1 != 0 || x2 != 0 || y1 != 0 || y2 != 0){
        scanf("%d", &n);
        cairam = 0;
        for (int i = 0; i < n; i++){
            scanf("%d %d", &mx, &my);
            if (mx >= x1 && mx <= x2 && my <= y1 && my >= y2){
                cairam++;
            } else {
                continue;
            }
        }
        teste++;
        printf("Teste %d\n", teste);
        printf("%d\n", cairam);
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    }
    return 0;
}