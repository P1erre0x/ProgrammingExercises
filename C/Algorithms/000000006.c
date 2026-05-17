#include <stdio.h>

int main()
{
    float salariofixo, valorvendas, comissao, salariofinal;
    scanf("%f*c", &salariofixo);
    scanf("%f*c", &valorvendas);
    comissao = valorvendas * 0.04;
    salariofinal = salariofixo + comissao;
    printf("Comissão: R$ %.2f\n", comissao);
    printf("Salário final: R$ %.2f\n", salariofinal);
    return 0;
}