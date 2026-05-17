#include <stdio.h>

#define PI 3.1415

int main()
{

    float angulo, distanciaescada, medidadaescada;
    scanf("%f*c", &angulo);
    scanf("%f*c", &distanciaescada);
    medidadaescada = distanciaescada / cos(angulo * PI / 180);
    printf("Medida da escada: %.2f", medidadaescada);

    return 0;
}