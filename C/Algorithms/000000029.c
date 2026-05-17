#include <stdio.h>

int main()
{
    float n1, n2, n3;
    scanf("%f*c", &n1);
    scanf("%f*c", &n2);
    scanf("%f*c", &n3);
    if (n1 > n2 && n1 > n3)
        printf("Maior: %f\n", n1);
    else if (n2 > n1 && n2 > n3)
        printf("Maior: %f\n", n2);
    else if (n3 > n1 && n3 > n2)
        printf("Maior : %f\n", n3);
    else
        printf("Os dois/três são iguais.");
    return 0;
}