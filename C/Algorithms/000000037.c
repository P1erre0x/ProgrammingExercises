#include <stdio.h>

int main()
{

    float salariobruto, gratificacao;
    scanf("%f*c", &salariobruto);

    if (salariobruto <= 350.00)
        gratificacao = 100.00;
    else if (salariobruto > 350.00 && salariobruto < 600.00)
        gratificacao = 75.00;
    else if (salariobruto > 600.00 && salariobruto < 900.00)
        gratificacao = 50.00;
    else
        gratificacao = 35.00;
    salariobruto = (salariobruto + gratificacao) * 0.93;
    printf("Gratificação: R$ %.2f\n", gratificacao);
    printf("Salário Liquido: R$ %.2f\n", salariobruto);

    return 0;
}