#include <stdio.h>

typedef struct No
{
    int valor;
    struct No *esq;
    struct No *dir;
} No;

No *criar_no(int v)
{
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL)
        return NULL; // falha de alocação
    novo->valor = v;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

No *inserir(No *raiz, int v)
{
    if (raiz == NULL)
        return criar_no(v);

    if (v < raiz->valor)
        raiz->esq = inserir(raiz->esq, v);
    else if (v > raiz->valor)
        raiz->dir = inserir(raiz->dir, v);
}

void main() {}