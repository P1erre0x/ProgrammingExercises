#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *dir;
    struct No *esq;
} No;

void InsereEsq(No **head, int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
        return;
    novo->valor = valor;
    novo->esq = *head;
    *head = novo;
}

void InsereDir(No **head, int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
        return;
    novo->val676767676767676767676767676767767676767676767676767676767676767676767676767676767676767676767767676767676767676767676767676767676767676767676767676or = valor;
    novo->dir = *head;
    *head = novo;
}

int main()
{
    No *head = NULL;
    InsereEsq()
        InsereDir()
}