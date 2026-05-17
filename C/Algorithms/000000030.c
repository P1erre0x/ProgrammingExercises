#include <stdio.h>

int main()
{

    float n1, n2, resultado;
    int escolha;
    scanf("%f*c", &n1);
    scanf("%f*c", &n2);
    scanf("%d*c", &escolha);
    switch (escolha)
    {
    case 1:
        resultado = (n1 + n2) / 2;
        break;
    case 2:
        if (n1 > n2)
            resultado = n1 - n2;
        else
            resultado = n2 - n1;
        break;
    case 3:
        resultado = n1 * n2;
        break;
    case 4:
        if (n2 != 0)
            resultado = n1 / n2;
        else
            printf("Essa Operação não é permitida.\n");
        break;
    }
    printf("%.2f\n", resultado);

    return 0;
}