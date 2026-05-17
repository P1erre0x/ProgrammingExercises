#include <stdio.h>

int main()
{

    float salariofuncionario, gratificacao, h, salarioagregado;
    int horastrabalhadas, minutostrabalhados, horasfaltas, minutosfaltas;

    printf("Salário funcionario:");
    scanf("%f*c", &salariofuncionario);
    printf("Horas extras trabalhadas:");
    scanf("%d*c", &horastrabalhadas);
    printf("Horas faltas não trabalhadas:");
    scanf("%d*c", &horasfaltas);

    minutostrabalhados = horastrabalhadas * 60;
    minutosfaltas = horasfaltas * 60;
    h = minutostrabalhados - ((2 * minutosfaltas) / 3);
    if (h >= 2400.00)
        gratificacao = 500.00;
    else if (h > 1800.00 && h < 2400)
        gratificacao = 400.00;
    else if (h >= 1200.00 && h < 1800.00)
        gratificacao = 300.00;
    else if (h >= 600.00 && h < 1200.00)
        gratificacao = 200.00;
    else
        gratificacao = 100.00;

    salarioagregado = salariofuncionario + gratificacao;
    printf("Bonus de gratificacao: R$ %.2f\n", gratificacao);
    printf("Salario atualizado: R$ %.2f\n", salarioagregado);
}