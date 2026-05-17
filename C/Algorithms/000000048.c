#include <stdio.h>

int main()
{

    int codigo,
        quantidade;
    float precototal,
        precounitario,
        valordesconto,
        precofinal;

    scanf("%d*c", &codigo);
    scanf("%d*c", &quantidade);

    if (codigo >= 1 && codigo <= 10)
        precounitario = 10.00;
    else if (codigo >= 11 && codigo <= 20)
        precounitario = 15.00;
    else if (codigo >= 21 && codigo <= 30)
        precounitario = 20.00;
    else if (codigo >= 31 && codigo <= 40)
        precounitario = 30.00;

    printf("Valor unitário: R$ %.2f\n", precounitario);
    precototal = precounitario * quantidade;
    printf("Valor total da nota: R$ %.2f\n", precototal);
    if (precototal <= 250.00)
        valordesconto = precototal * 0.05;
    else if (precototal > 250.00 && precototal <= 500.00)
        valordesconto = precototal * 0.10;
    else if (precototal > 500.00)
        valordesconto = precototal * 0.15;
    printf("Valor do desconto: R$ %.2f\n", valordesconto);
    precofinal = precototal - valordesconto;
    printf("Preco final: %.2f\n", precofinal);
    return 0;
}