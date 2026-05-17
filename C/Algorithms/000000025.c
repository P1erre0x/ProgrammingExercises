#include <stdio.h>

int main()
{
    int horas, minutos;
    scanf("%d*c", &horas);
    scanf("%d*c", &minutos);
    printf("Hora convertida para minutos: %d\n", horas * 60);
    printf("Total de minutos:%d\n", (horas * 60) + minutos);
    printf("Total de minutos em segundos: %d\n", ((horas * 60) + minutos) * 60);
    return 0;
}