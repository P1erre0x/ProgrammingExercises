#include <stdio.h>

int main()
{

    char sexo;
    float altura, pesoideal;

    printf("Sua altura:");
    scanf("%f*c", &altura);
    getchar();
    printf("Escreva seu sexo conforme especificado (HOMEM = H) / (MULHER = M) em maiúsculo:");
    scanf("%c*c", &sexo);
    switch (sexo)
    {
    case 72:
        pesoideal = (72.7 * altura) - 58;
        break;
    case 77:
        pesoideal = (62.1 * altura) - 44.7;
        break;
    default:
        printf("Opção inválida.\n");
    }
    printf("Peso ideal: %.3f KG", pesoideal);

    return 0;
}