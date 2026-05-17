#include <stdio.h>

int main()
{
    float peso, maispeso, menospeso;
    scanf("%f*c", &peso);
    maispeso = peso * 1.15;
    menospeso = peso * 0.80;
    printf("15%% mais pesado: %.2f KG\n", maispeso);
    printf("20%% mais leve: %.2f KG\n", menospeso);
    return 0;
}