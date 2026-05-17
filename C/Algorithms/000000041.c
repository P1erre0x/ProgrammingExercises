#include <stdio.h>

int main()
{

    float precoatual, precocorrigido, desconto;
    int numero;

    scanf("%f*c", &precoatual);
    scanf("%d*c", &numero);
    if (precoatual <= 30.00)
        printf("Não houve desconto.\n");
    else if (precoatual > 30.00 && precoatual < 100.00)
        desconto = precoatual * 0.1;
    else
        desconto = precoatual * 0.15;
    precocorrigido = precoatual - desconto;
    printf("Valor corrigido: %.2f do produto de número: %d", precocorrigido, numero);

    return 0;
}