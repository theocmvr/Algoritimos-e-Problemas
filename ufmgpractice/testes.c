#include <stdio.h>
float rendePoupanca(float x)
{
    float taxa = 3.14;
    float juros = 1.01;
    return x * juros - taxa;
}
void main()
{
    float poupanca;
    poupanca = 500;
    poupanca = rendePoupanca(poupanca);
    poupanca += 200;
    poupanca = rendePoupanca(poupanca);
    poupanca -= 50;
    poupanca = rendePoupanca(poupanca);
    printf("O rendimento da sua poupanca é : %f\n", poupanca);
}