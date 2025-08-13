#include <stdio.h>
void main()
{
    float pesoOlivia, pesoBrutus, alturaOlivia, alturaBrutus;
    float imcOlivia, imcBrutus, pesoidealOlivia, pesoidealBrutus;
    pesoOlivia = 45;
    alturaOlivia = 1.76;
    pesoBrutus = 122;
    alturaBrutus = 1.84;
    imcOlivia = pesoOlivia / (alturaOlivia * alturaOlivia);
    imcBrutus = pesoBrutus / (alturaBrutus * alturaBrutus);
    printf("IMC atual da Olivia: %f\nIMC atual do Brutus: %f\n", imcOlivia, imcBrutus);
    pesoidealOlivia = (18.5 * alturaOlivia * alturaOlivia) - pesoOlivia;
    pesoidealBrutus = pesoBrutus - (25 * alturaBrutus * alturaBrutus);
    printf("Olivia deve perder: %fkg\nBrutus deve perder: %fkg\n", pesoidealOlivia, pesoidealBrutus);
}