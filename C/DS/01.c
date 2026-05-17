#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

void AllocarNo(int **head, int valor)
{
    No *novo = malloc(sizeof(int));
    if (novo == NULL)
    {
        return;
    }
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
}

int main()
{
    int *head = NULL;
    AllocarNo(&head, 25);
    AllocarNo(&head, 30);
    AllocarNo(&head, 35);
    AllocarNo(&head, 40);
    AllocarNo(&head, 45);
    int somadorDoNo = 0;
    for (No *p = head; p != NULL; p = p->prox)
    {
        somadorDoNo += p->valor;
    }
    printf("%d", somadorDoNo);
}