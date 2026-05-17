#include <stdio.h>
#define senha 4531

int main()
{

    int senhauser;
    scanf("%d*c", &senhauser);
    if (senhauser == senha)
        printf("Acesso autorizado.\n");
    else
        printf("Acesso negado.\n");

    return 0;
}