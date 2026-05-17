#include <stdio.h>

int main(){
    int idade,gruporisco;
    float peso;

    if(idade < 20){
        if(peso < 60)
            gruporisco = 9;
        else if(peso >= 60 && peso <= 90)
            gruporisco = 8;
        else if(peso > 90)
            gruporisco = 7;
    }
    else if(idade >= 20 && idade <= 50){
        if(peso < 60)
            gruporisco = 6;
        else if(peso >= 60 && peso <= 90)
            gruporisco = 5;
        else if(peso > 90)
            gruporisco = 4;
    }
    else if(idade > 50){
        if(peso < 60)
            gruporisco = 3;
        else if(peso >= 60 && peso <= 90)
            gruporisco = 2;
        else if(peso > 90)
            gruporisco = 1;
    }

    printf("Seu grupo de risco: %d",gruporisco);
}