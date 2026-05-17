#include <stdio.h>

int main(){

    int idadenadador;
    scanf("%d*c",&idadenadador);
    if(idadenadador >= 5 && idadenadador <= 7)
        printf("Infantil\n");
    else if(idadenadador >= 8 && idadenadador <= 10)
        printf("Juvenil\n");
    else if(idadenadador >= 11 && idadenadador <= 15)
        printf("Adolescente\n");
    else if(idadenadador >= 16 && idadenadador <= 30)
        printf("Adulto\n");
    else if(idadenadador > 30)
        printf("Senior\n");
    else
        printf("Idade inadequada.\n");
    return 0;
}