#include <stdio.h>

int main()
{

    int anonascimento, idade;
    scanf("%d*c", &anonascimento);
    idade = 2026 - anonascimento;
    printf("%d\n", idade);
    printf("%d\n", idade * 12);
    printf("%d\n", idade * 365);
    printf("%d\n", idade * 52.176);
    return 0;
}