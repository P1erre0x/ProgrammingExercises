#include <stdio.h>
#include <math.h>

int main()
{

    float cat1, cat2, hipo;
    scanf("%f*c", &cat1);
    scanf("%f*c", &cat2);
    hipo = pow(cat1, 2) + pow(cat2, 2);
    printf("%.2f", hipo);

    return 0;
}