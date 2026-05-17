#include <stdio.h>
#include <math.h>

#define pi 3.1415

int main()
{

    float raio;
    float esferacomp, esferaarea, esferavol;

    scanf("%f*c", &raio);
    esferacomp = 2 * pi * raio;
    esferaarea = pi * pow(raio, 2);
    esferavol = (3 * pi * pow(raio, 3)) / 4;
    printf("Comprimento esfera: %.2f\n", esferacomp);
    printf("Esfera area: %.2f\n", esferaarea);
    printf("Esfera volume: %.2f\n", esferavol);

    return 0;
}