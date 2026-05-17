#include <stdio.h>

int main()
{

    float salariofuncionario, aumentosalario;

    scanf("%f*c", &salariofuncionario);
    if (salariofuncionario < 500)
    {
        aumentosalario = salariofuncionario * 0.30;
        printf("Salário atualizado.\n");
    }
    else
    {
        aumentosalario = 0;
        printf("Você não tem direito ao aumento salarial.\n");
    }
    salariofuncionario += aumentosalario;
    printf("R$ %.2f", salariofuncionario);
    return 0;
}