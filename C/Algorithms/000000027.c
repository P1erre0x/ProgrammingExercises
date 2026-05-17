#include <stdio.h>

int main()
{

    float nota1, nota2, media;
    scanf("%f*c", &nota1);
    scanf("%f*c", &nota2);
    media = (nota1 + nota2) / 2;
    if (media < 3.0)
        printf("Reprovado.\n");
    else if (media >= 3.0 && media < 7.0)
        printf("Exame.\n");
    else
        printf("Aprovado.\n");

    return 0;
}