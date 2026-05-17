#include <stdio.h>

int main()
{

    float precoproduto;
    int origem;
    scanf("%f*c", &precoproduto);
    scanf("%d*c", &origem);

    printf("O Produto de valor: %.2f vem de origem de/do ", precoproduto);

    if (origem == 1)
        printf("SUL\n");
    else if (origem == 2)
        printf("NORTE\n");
    else if (origem == 3)
        printf("LESTE\n");
    else if (origem == 4)
        printf("OESTE\n");
    else if (origem == 5 || origem == 6)
        printf("NORDESTE\n");
    else if (origem == 7 || origem == 8 || origem == 9)
        printf("SUDESTE\n");
    else if (origem >= 10 && origem <= 20)
        printf("CENTRO-OESTE\n");
    else if (origem >= 21 && origem <= 30)
        printf("NORDESTE\n");

    return 0;
}