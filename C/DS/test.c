#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

void Allocarno(No **head, int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
    {
        return;
    }
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
    return;
}

int main()
{
    No *head = NULL;
    Allocarno(&head, 25);
    Allocarno(&head, 27);
    Allocarno(&head, 29);
    for (No *p = head; p != NULL; p = p->prox)
    {
        printf("%d\n", p->valor);
    }
}
