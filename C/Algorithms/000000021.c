#include <stdio.h>

int main()
{
    int horastrabalhadas, horasextras;
    float salariominimo, salarioreceber;
    scanf("%d*c", &horastrabalhadas);
    scanf("%f*c", &salariominimo);
    scanf("%d*c", &horasextras);
    salarioreceber = (horastrabalhadas * salariominimo / 8) + (horasextras * salariominimo / 4);
    printf("R$ %.2f", salarioreceber);
    return 0;
}