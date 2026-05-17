#include <stdio.h>

int main()
{

    float salariominimo, conta1, conta2, restantesalario;
    scanf("%f*c", &salariominimo);
    scanf("%f*c", &conta1);
    scanf("%f*c", &conta2);
    restantesalario = salariominimo - (conta1 * 1.02 + conta2 * 1.02);
    printf("R$ %.2f", restantesalario);
    return 0;
}