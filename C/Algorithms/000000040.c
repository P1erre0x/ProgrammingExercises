#include <stdio.h>

int main()
{

    float capital, montante, juros;
    int escolha;
    scanf("%f*c", &capital);
    scanf("%d*c", &escolha);
    switch (escolha)
    {
    case 1:
        printf("BEM VINDO A POUPANÇA!\n");
        juros = capital * 0.03;
        break;
    case 2:
        printf("BEM VINDO AOS FUNDOS DE RENDA FIXA!\n");
        juros = capital * 0.04;
        break;
    default:
        printf("INVESTIMENTO DESCONHECIDO!");
        juros = 0;
    }
    montante = capital + juros;
    printf("Seu dinheiro rendeu: R$ %.2f\n", juros);
    printf("Montante atualizado: R$ %.2f\n", montante);

    return 0;
}