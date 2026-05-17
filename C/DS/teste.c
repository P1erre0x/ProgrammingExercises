#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int info;
    struct No *prox;
} No;

No *CriarListaVazia()
{
    return NULL;
}

No *CriadorDeNo(int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
        return;
    novo->info = valor;
    novo->prox = NULL;
    return novo;
}

No *InserirNoInicioLista(No *lista, int valor)
{
    No *novo = CriadorDeNo(valor);
    novo->prox = lista;
    return novo;
}

No *InserirNoFinalLista(No *lista, int valor)
{
    No *novo = CriadorDeNo(valor);
    No *p = lista;
    if (lista == NULL)
        lista = novo;
    else
    {
        while (p->prox != NULL)
            p = p->prox;
        p->prox = novo;
    }
    return lista;
}

int VerificarLista(No *lista)
{
    if (lista == NULL)
        return 1;
    else
        return 0;
}

int main()
{
    No *lista = CriarListaVazia();
    int verificador = VerificarLista(lista);
    if (verificador)
        printf("LISTA VAZIA\n");
    else
        printf("LISTA NÃO VAZIA\n");
    return 0;
}