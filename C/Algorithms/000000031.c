#include <stdio.h>
#include <math.h>

int main()
{

    float n1, n2;
    int escolha;
    scanf("%f*c", &n1);
    scanf("%f*c", &n2);
    scanf("%d*c", &escolha);

    switch (escolha)
    {
    case 1:
        printf("%.3lf\n", pow(n1, n2));
        break;
    case 2:
        printf("%.3f %.3f\n", sqrt(n1), sqrt(n2));
        break;
    case 3:
        printf("%.3f %.3f\n", cbrt(n1), cbrt(n2));
        break;
    default:
        printf("Escolha inválida.\n");
    }

    return 0;
}