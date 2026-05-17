#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *ant;
    struct No *prox;
} No;

void AllocarNo(No **head, int valor)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL)
        return;
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
}

void ImprimirLista(No **head)
{
    printf("head -> ");
    for (No *p = *head; p != NULL; p = p->prox)
    {
        printf("[%d] -> ", p->valor);
    }
    printf("NULL\n");
}

void InsereOrdenado(No **head, int valor)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL)
        return;

    novo->valor = valor;

    if (*head == NULL || valor <= (*head)->valor)
    {
        novo->prox = *head;
        *head = novo;
        return;
    }
    No *anterior = *head;
    No *atual = *head;
    while (atual != NULL && atual->valor < valor)
    {
        anterior = atual;
        atual = (*head)->prox;
    }
    anterior->prox = novo;
    novo->prox = atual;
}

int main()
{
    No *head = NULL;
    AllocarNo(&head, 20);
    AllocarNo(&head, 50);
    AllocarNo(&head, 12);
    ImprimirLista(&head);
    InsereOrdenado(&head, 40);
    InsereOrdenado(&head, 10);
    ImprimirLista(&head);
}