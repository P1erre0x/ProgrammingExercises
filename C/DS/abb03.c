#include <stdio.h>
#include <stdlib.h>

typedef struct No
{

    int value;
    struct No *left;
    struct No *right;
} No;

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

No *Minimo(No *tree)
{

    while (tree != NULL && tree->left != NULL)
        tree = tree->left;

    return tree;
}

No *RemoverNo(No *tree, int valor)
{
    if (tree == NULL)
        return NULL;
    if (valor < tree->value)
        tree->left = RemoverNo(tree->left, valor);
    else if (valor > tree->value)
        tree->right = RemoverNo(tree->right, valor);
    else
    {
        if (tree->left == NULL && tree->right == NULL)
        {
            free(tree);
            return NULL;
        }
        if (tree->left == NULL)
        {
            No *child = tree->right;
            free(tree);
            return child;
        }
        if (tree->right == NULL)
        {
            No *child = tree->left;
            free(tree);
            return child;
        }
        No *sucessor = Minimo(tree->right);
        tree->value = sucessor->value;
        tree->right = RemoverNo(tree->right, sucessor->value);
    }

    return;
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
}