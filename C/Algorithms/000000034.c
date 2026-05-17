#include <stdio.h>

int main()
{

    float saldomedio, credito;
    scanf("%f*c", &saldomedio);

    if (saldomedio > 400.00)
        credito = saldomedio * 0.3;
    else if (saldomedio <= 400 && saldomedio > 300)
        credito = saldomedio * 0.25;
    else if (saldomedio <= 300 && saldomedio > 200)
        credito = saldomedio * 0.2;
    else
        credito = saldomedio * 0.1;
    printf("Credito: R$ %.2f", credito);

    return 0;
}