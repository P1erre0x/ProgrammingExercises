#include <stdio.h>

int main()
{

    float preco, aumentopercentual, aumento, imposto, novopreco;
    int categoria;
    char situacao;

    scanf("%f*c", &preco);
    scanf("%d*c", &categoria);
    getchar();
    scanf("%c", &situacao);

    if (preco <= 25)
    {
        if (categoria == 1)
            aumentopercentual = 0.05;
        else if (categoria == 2)
            aumentopercentual = 0.08;
        else if (categoria == 3)
            aumentopercentual = 0.10;
    }
    if (preco > 25)
    {
        if (categoria == 1)
            aumentopercentual = 0.12;
        else if (categoria == 2)
            aumentopercentual = 0.15;
        else if (categoria == 3)
            aumentopercentual = 0.18;
    }

    aumento = preco * aumentopercentual;

    if (categoria == 2 || situacao == 'R')
        imposto = preco * 0.05;
    else
        imposto = preco * 0.08;

    novopreco = (preco + aumento) - imposto;
    printf("======================================\n");
    printf("Preco: R$ %.2f\n", preco);
    printf("Categoria: %d\n", categoria);
    printf("Situacao: %c\n", situacao);
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Novo Preco: R$ %.2f\n", novopreco);

    if (novopreco <= 50.00)
        printf("Barato\n");
    else if (novopreco > 50.00 && novopreco < 120.00)
        printf("Normal\n");
    else
        printf("Caro\n");
    printf("======================================");
    return 0;
}