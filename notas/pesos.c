#include <stdio.h>
#include "pesos.h"
float pesosc1()
{
    float testes1, p1, p2, p3;
    printf("Insira a nota do seus mini testes:\n");
    scanf("%f", &testes1);
    printf("Insira a nota da sua primeira prova:\n");
    scanf("%f", &p1);
    printf("Insira a nota da sua segunda prova:\n");
    scanf("%f", &p2);
    printf("Insira a nota da sua terceira prova:\n");
    scanf("%f", &p3);
    return ((2 * testes1) + (2 * p1) + (3 * p2) + (3 * p3)) / 10;
}
float pesosf1()
{
    float p1, p2, p3;
    printf("Insira a nota da sua primeira prova:\n");
    scanf("%f", &p1);
    printf("Insira a nota da sua segunda prova:\n");
    scanf("%f", &p2);
    printf("Insira a nota da sua terceira prova:\n");
    scanf("%f", &p3);
    return (p1 + p2 + p3) / 3;
}
float pesosial()
{
    float p1, p2, p3;
    printf("Insira a nota da sua primeira prova:\n");
    scanf("%f", &p1);
    printf("Insira a nota da sua segunda prova:\n");
    scanf("%f", &p2);
    printf("Insira a nota da sua terceira prova:\n");
    scanf("%f", &p3);
    return ((2 * p1) + (2 * p2) + (3 * p3)) / 7;
}
float pesosfexp()
{
    float p1, rel1, rel2, p2;
    printf("Insira a nota da sua primeira prova:\n");
    scanf("%f", &p1);
    printf("Insira a nota do seu primeiro relatorio:\n");
    scanf("%f", &rel1);
    printf("Insira a nota do seu segundo relatorio:\n");
    scanf("%f", &rel2);
    printf("Insira a nota da sua segunda prova:\n");
    scanf("%f", &p2);
    return (p1 + rel1 + rel2 + p2) / 4;
}
float pesosapc()
{
    float p1, p2, p3;
    printf("Insira a nota da sua primeira prova:\n");
    scanf("%f", &p1);
    printf("Insira a nota da sua segunda prova:\n");
    scanf("%f", &p2);
    printf("Insira a nota da sua terceira prova:\n");
    scanf("%f", &p3);
    return ((p1) + (2 * p2) + (3 * p3)) / 6;
}