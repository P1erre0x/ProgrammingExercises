#include <stdio.h>

int main()
{

    int idade;
    scanf("%d*c", &idade);
    if (idade >= 18)
        printf("Maioridade.\n");
    else
        printf("Menoridade.\n");

    return 0;
}