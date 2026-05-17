// ABB
#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *left;
    struct No *right;
} No;

No *CriarNo(int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
        return NULL;
    novo->valor = valor;
    novo->right = NULL;
    novo->left = NULL;
    return novo;
}

No *InserirArvore(No *tree, int valor)
{

    if (tree == NULL)
    {
        return CriarNo(valor);
    }
    if (valor < tree->valor)
    {
        tree->left = InserirArvore(tree->left, valor);
    }
    else if (valor > tree->valor)
    {
        tree->right = InserirArvore(tree->right, valor);
    }
    return tree;
}

int main()
{
    No *tree = NULL;
    tree = InserirArvore(tree, 50);
    tree = InserirArvore(tree, 30);
    tree = InserirArvore(tree, 70);
    tree = InserirArvore(tree, 20);
    tree = InserirArvore(tree, 40);
    tree = InserirArvore(tree, 60);
    tree = InserirArvore(tree, 80);
    printf("Raiz: %d\n", tree->valor);
    printf("Esq da raiz: %d\n", tree->left->valor);
    printf("Dir da raiz: %d\n", tree->right->valor);
    printf("Esq da Esq da Raiz: %d\n", tree->left->left->valor);
    printf("Dir da Dir da raiz: %d\n", tree->right->right->valor);
}