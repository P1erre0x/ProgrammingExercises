#include <stdio.h>

int main()
{
    float precoproduto, novopreco, desconto;
    scanf("%f*c", &precoproduto);
    desconto = precoproduto * 0.10;
    novopreco = precoproduto - desconto;
    printf("Novo preço: %.2f", novopreco);
    return 0;
}