#include <stdio.h>

int main()
{

    float nota1, nota2, nota3, nota4, media;
    scanf("%f*c", &nota1);
    scanf("%f*c", &nota2);
    scanf("%f*c", &nota3);
    scanf("%f*c", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    if (!(media >= 7))
    {
        printf("Reprovado!\n");
    }
    else
    {
        printf("Aprovado!\n");
    }

    return 0;
}