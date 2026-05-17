#include <stdio.h>

int main()
{

    float reais, euro, franco, dolar;
    scanf("%f*c", &reais);
    euro = reais / 5.877;
    dolar = reais / 5.055;
    franco = reais / 6.423;
    printf("Euro: %.2f\n", euro);
    printf("Dolar: %.2f\n", dolar);
    printf("Marco Alemao: %.2f\n", franco);

    return 0;
}