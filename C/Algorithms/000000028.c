#include <stdio.h>

int main()
{

    float n1, n2;
    scanf("%f*c", &n1);
    scanf("%f*c", &n2);

    if (n1 > n2)
        printf("Maior: %.4f", n1);
    else if (n1 < n2)
        printf("Maior: %.4f", n2);
    else
        printf("São a mesma coisa.");

    return 0;
}