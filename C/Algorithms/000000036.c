#include <stdio.h>

int main()
{

    float salarioatual, aumentosalario, novosalario;
    scanf("%f*c", &salarioatual);

    if (salarioatual <= 300.00)
        aumentosalario = salarioatual * 0.15;
    else if (salarioatual > 300.00 && salarioatual < 600.00)
        aumentosalario = salarioatual * 0.10;
    else if (salarioatual >= 600.00 && salarioatual <= 900.00)
        aumentosalario = salarioatual * 0.05;
    else
    {
        printf("Você não teve aumento salarial.\n");
        aumentosalario = 0;
    }
    novosalario = salarioatual + aumentosalario;
    printf("R$ %.2f", novosalario);

    return 0;
}