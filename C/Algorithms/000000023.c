#include <stdio.h>

int main()
{
    float pangulo, sangulo, tangulo;
    scanf("%f", &pangulo);
    scanf("%f", &sangulo);
    tangulo = 180 - (pangulo + sangulo);
    printf("%.2f", tangulo);
    return 0;
}