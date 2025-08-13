#include <stdio.h>
#include <stdio.h>
#include <math.h>
int main (){
    int n, coelho, rato, sapos, animal, total;
    char c, r, s, an;
    double pc, pr, ps;
    scanf("%d", &n);
    total = 0;
    coelho = 0;
    rato = 0;
    sapos = 0;
    for (int i = 0; i < n; i++){
        animal = 0;
        scanf("%d %c", &animal, &an);
        total += animal;
        if (an == 'C'){
            coelho += animal;
        } else if (an == 'R'){
            rato += animal;
        } else {
            sapos += animal;
        }
    }
    pc = 100*((double)coelho)/((double)total);
    pr = 100*((double)rato)/((double)total);
    ps = 100*((double)sapos)/((double)total);
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2lf %%\nPercentual de ratos: %.2lf %%\nPercentual de sapos: %.2lf %%\n", total, coelho, rato, sapos, pc, pr, ps);
    return 0;
}