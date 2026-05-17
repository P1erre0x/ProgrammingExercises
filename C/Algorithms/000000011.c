#include <stdio.h>

int main()
{

    float diagonalmaior, diagonalmenor, area;
    scanf("%f*c", &diagonalmaior);
    scanf("%f*c", &diagonalmenor);
    area = (diagonalmaior + diagonalmenor) / 2;
    printf("%.2f", area);
    return 0;
}