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
    {
        return;
    }
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
}

void InserirInicio(No **head, int valor)
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

void ImprimirLista(const No **head)
{
    printf("HEAD -> ");
    for (No *p = *head; p != NULL; p = p->prox)
    {
        printf("[%d] -> ", p->valor);
    }
    printf("NULL");
}

int main()
{
    No *head = NULL;
    AllocarNo(&head, 30);
    AllocarNo(&head, 20);
    AllocarNo(&head, 10);
    ImprimirLista(&head);
}