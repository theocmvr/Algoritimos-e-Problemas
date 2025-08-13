#include<stdio.h>
void main(){
    float poupanca, juros;
    juros = 1.0056;
    //primeiro mês
    poupanca = 789.54;
    poupanca *= juros;
    //segundo mês
    poupanca += 302.20;
    poupanca *= juros;
    //terceiro mês
    poupanca -= 58.25;
    poupanca *= juros;
    //quarto mês
    printf("\nYou have %.2f remaining at your account\n", poupanca);
}