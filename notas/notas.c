#include <stdio.h>
#include "pesos.h"
int main()
{
    char repetir;
    int materia;
    float apresentacao, testes1, p1, p2, p3, rel1, rel2, notafinal;
    while (1)
    {
        printf("Escolha uma materia:\n1-Calculo\n2-APC\n3-IAL\n4-Fisica\n5-Fisica experimental\n6-IEC\n");
        scanf("%d", &materia);
        if (materia == 1)
        {
            notafinal = pesosc1();
            printf("Nota final : %.3f\n", notafinal);
        }
        else if (materia == 2)
        {
            notafinal = pesosapc();
            printf("Nota final : %.3f\n", notafinal);
        }
        else if (materia == 3)
        {
            notafinal = pesosial();
            printf("Nota final : %.3f\n", notafinal);
        }
        else if (materia == 4)
        {
            notafinal = pesosf1();
            printf("Nota final : %.3f\n", notafinal);
        }
        else if (materia == 5)
        {
            notafinal = pesosfexp(p1, rel1, rel2, p2);
            printf("Nota final : %.3f\n", notafinal);
        }
        else
        {
            printf("Insira a nota da sua apresentacao:\n");
            scanf("%f", &apresentacao);
            notafinal = apresentacao;
            printf("Nota final : %.3f\n", notafinal);
        }
        printf("Deseja calcular novamente?\n");
        getchar();
        scanf("%c", &repetir);
        if (repetir == 'S')
        {
            continue;
        }
        else
        {
            printf("Encerrado!\n");
            break;
        }
    }
    return 0;
}