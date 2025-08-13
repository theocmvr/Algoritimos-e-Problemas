#include<stdio.h>
void ordena(int a[1001], int n){
    int aux;
    for(int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] < a[j]){
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }    
}
int main(){
    int n, m, resp;
    int p[1001];
    int o[1001];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &m);
        resp = 0;
        for (int j = 0; j < m; j++){
            scanf("%d", &p[j]);  
        }
        for (int z = 0; z < m; z++){
            o[z] = p[z];
        }
        ordena(p, m);
        for (int w = 0; w < m; w++){
            if (o[w] == p[w]){
                resp++;
            }
        }
        printf("%d\n", resp);  
    }
    return 0;
}