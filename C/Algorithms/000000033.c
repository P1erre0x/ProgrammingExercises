#include <stdio.h>

int main()
{

    float salariofuncionario, reajuste, salarionovo;
    scanf("%f*c", &salariofuncionario);

    if (salariofuncionario <= 300.00)
        reajuste = salariofuncionario * 0.35;
    else
        reajuste = salariofuncionario * 0.15;

    salarionovo = salariofuncionario + reajuste;
    printf("R$ %.2f", salarionovo);

    return 0;
}