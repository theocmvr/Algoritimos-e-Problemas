#include <stdio.h>
#include <math.h>
#include "ex.h"
void main()
{
    float primeiroResultado, segundoResultado, terceiroResultado;
    primeiroResultado = cauchy(-2);
    segundoResultado = gumbel(0, 0.5, 2);
    terceiroResultado = laplace(-6, -5, 4);
    printf("Para Cauchy padrao, temos: %f\nPara Gumbel, temos: %f\nPara Laplace, temos: %f\n", primeiroResultado, segundoResultado, terceiroResultado);
}