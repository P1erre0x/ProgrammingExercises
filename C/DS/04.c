#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

void AllocarNo(No **head, int valor)
{
    No *novo = malloc(sizeof(int));
    if (novo == NULL)
        return;
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
}

void AllocarNoFim(No **head, int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
        return;
    novo->valor = valor;
    novo->prox = NULL;
    if (*head == NULL)
    {
        *head = novo;
        return;
    }
    No *atual = *head;
    while (atual->prox != NULL)
    {
        atual = atual->prox;
    }
    atual->prox = novo;
}

void ImprimirLista(const No **head)
{
    printf("head -> ");
    for (No *p = *head; p != NULL; p = p->prox)
    {
        printf("[%d] -> ", p->valor);
    }
    printf("NULL");
}

int main()
{
    No *head = NULL;
    AllocarNo(&head, 10);
    AllocarNo(&head, 20);
    AllocarNo(&head, 30);
    AllocarNoFim(&head, 90);
    ImprimirLista(&head);
}