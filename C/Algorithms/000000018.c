#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    scanf("%f*c", &celsius);
    fahrenheit = 180 * (celsius + 32) / 100;
    printf("%.2f\n", fahrenheit);
    return 0;
}