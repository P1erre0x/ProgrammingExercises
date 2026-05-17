#include <stdio.h>

int main()
{

    float salariofuncionario, aumento, novosalario;
    scanf("%f*c", &salariofuncionario);
    if (salariofuncionario <= 300.00)
        aumento = salariofuncionario * 0.5;
    else if (salariofuncionario > 300.00 && salariofuncionario <= 500.00)
        aumento = salariofuncionario * 0.4;
    else if (salariofuncionario > 500.00 && salariofuncionario <= 700.00)
        aumento = salariofuncionario * 0.3;
    else if (salariofuncionario > 700.00 && salariofuncionario <= 800.00)
        aumento = salariofuncionario * 0.2;
    else if (salariofuncionario > 800.00 && salariofuncionario <= 1000.00)
        aumento = salariofuncionario * 0.1;
    else
        aumento = salariofuncionario * 0.05;
    novosalario = salariofuncionario + aumento;
    printf("Novo salario: R$ %.2f\n", novosalario);

    return 0;
}