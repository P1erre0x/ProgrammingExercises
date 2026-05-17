#include <stdio.h>

int main()
{
    float nota1, nota2, media;

    scanf("%f*c", &nota1);
    scanf("%f*c", &nota2);
    media = (nota1 * 2 + nota2 * 3) / (2 + 3);
    printf("%.2f", media);
    return 0;
}
