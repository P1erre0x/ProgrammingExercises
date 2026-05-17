#include <stdio.h>

int main()
{

    float basemaior, basemenor, altura, area;
    scanf("%f*c", &basemaior);
    scanf("%f*c", &basemenor);
    scanf("%f*c", &altura);
    area = ((basemaior + basemenor) * altura) / 2;
    printf("%.2f\n", area);

    return 0;
}