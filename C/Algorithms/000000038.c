#include <stdio.h>

int main()
{

    float precoproduto, percentualaumento, novopreco;

    scanf("%f*c", &precoproduto);
    if (precoproduto <= 50.00)
        percentualaumento = precoproduto * 0.05;
    else if (precoproduto > 50.00 && precoproduto <= 100.00)
        percentualaumento = precoproduto * 0.10;
    else
        percentualaumento = precoproduto * 0.15;
    novopreco = percentualaumento + precoproduto;
    printf("Novo preço: %.2f\n", novopreco);
    if (novopreco <= 80.00)
        printf("Barato.\n");
    else if (novopreco > 80.00 && novopreco <= 120.00)
        printf("Normal.\n");
    else if (novopreco > 120.00 && novopreco <= 200.00)
        printf("Caro.\n");
    else
        printf("Muito caro.\n");

    return 0;
}