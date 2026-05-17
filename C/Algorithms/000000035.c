#include <stdio.h>

int main()
{

    float custofabrica, precoconsumidor, pdistribuidor, pimpostos;

    scanf("%f*c", &custofabrica);
    if (custofabrica <= 12000)
    {
        pdistribuidor = custofabrica * 0.05;
        pimpostos = 0;
    }
    else if (custofabrica > 12000 && custofabrica <= 25000)
    {
        pdistribuidor = custofabrica * 0.1;
        pimpostos = custofabrica * 0.15;
    }
    else
    {
        pdistribuidor = custofabrica * 0.15;
        pimpostos = custofabrica * 0.2;
    }
    precoconsumidor = custofabrica + pdistribuidor + pimpostos;
    printf("R$ %.2f", precoconsumidor);

    return 0;
}