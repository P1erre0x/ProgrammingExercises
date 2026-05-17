#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *esq;
    struct No *dir;
} No;

No *CriaNo(int valor)
{

    No *novo = malloc(sizeof(No));
    if (novo == NULL)
        return NULL;
    novo->valor = valor;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

No *InserirArvore(No *tree, int valor)
{
    if (tree == NULL)
        return CriaNo(valor);

    if (valor < tree->valor)
        tree->esq = InserirArvore(tree->esq, valor);
    else
        tree->dir = InserirArvore(tree->dir, valor);
    return tree;
}

void EmOrdem(const No *tree)
{
    if (tree == NULL)
        return;
    EmOrdem(tree->esq);
    printf("%d ", tree->valor);
    EmOrdem(tree->dir);
}

int main()
{

    No *tree = NULL;
    tree = InserirArvore(tree, 42);
    tree = InserirArvore(tree, 15);
    tree = InserirArvore(tree, 78);
    tree = InserirArvore(tree, 7);
    tree = InserirArvore(tree, 23);
    tree = InserirArvore(tree, 65);
    tree = InserirArvore(tree, 9);
    tree = InserirArvore(tree, 3);

    EmOrdem(tree);

    return 0;
}