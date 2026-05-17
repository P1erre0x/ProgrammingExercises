#include <stdio.h>
#include <stdlib.h>

typedef struct No
{

    int value;
    struct No *left;
    struct No *right;
} No;

void EmOrdem(const No *tree)
{
    if (tree == NULL)
        return;
    EmOrdem(tree->left);
    printf("%d ", tree->value);
    EmOrdem(tree->right);
}
void PreOrdem(const No *tree)
{
    if (tree == NULL)
        return;
    printf("%d ", tree->value);
    PreOrdem(tree->left);
    PreOrdem(tree->right);
}
void PosOrdem(const No *tree)
{
    if (tree == NULL)
        return;
    PosOrdem(tree->left);
    PosOrdem(tree->right);
    printf("%d ", tree->value);
}

No *CriaNo(int valor)
{
    No *new = malloc(sizeof(No));
    if (new == NULL)
        return NULL;
    new->value = valor;
    new->left = NULL;
    new->right = NULL;
    return new;
}

No *InserirArvore(No *tree, int valor)
{
    if (tree == NULL)
        return CriaNo(valor);

    if (valor < tree->value)
        tree->left = InserirArvore(tree->left, valor);
    else if (valor > tree->value)
        tree->right = InserirArvore(tree->right, valor);

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
    tree = InserirArvore(tree, 50);

    PreOrdem(tree);
    printf("\n");
    EmOrdem(tree);
    printf("\n");
    PosOrdem(tree);
    printf("\n");
}