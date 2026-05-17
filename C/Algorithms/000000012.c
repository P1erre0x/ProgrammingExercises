#include <stdio.h>

int main()
{

    float salariominimo, salariofuncionario;
    int quantidade;
    scanf("%f*c", &salariominimo);
    scanf("%f*c", &salariofuncionario);
    quantidade = salariofuncionario / salariominimo;
    printf("%d", quantidade);
    return 0;
}