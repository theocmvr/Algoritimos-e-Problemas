#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include "ex.h"
// Cauchy funcionando
float cauchy(float x)
{
    return 1 / (M_PI * (1 + (x * x)));
}
// Gumbel funcionando
float gumbel(float x, float u, float b)
{
    float z = (x - u) / b;
    return (1 / b) * exp(-(z + exp(-1 * z)));
}
// Laplace funcionando
float laplace(float x, float u, float b)
{
    return (1 / (2 * b)) * (exp((-fabs(x - u)) / b));
}
