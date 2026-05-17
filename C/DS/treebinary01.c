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

    No *leaf = malloc(sizeof(No));
    if (leaf == NULL)
    {
        return NULL;
    }
    leaf->valor = valor;
    leaf->left = NULL;
    leaf->right = NULL;

    return leaf;
}

No *ExibeArvore(No *raiz)
{
    if (raiz == NULL)
        return;
    ExibeArvore(raiz->left);
    printf("%d\n", raiz->valor);
    ExibeArvore(raiz->right);
}

int main()
{
    No *root = NULL;
    root = CriarNo(50);
    root->left = CriarNo(20);
    root->right = CriarNo(70);
    ExibeArvore(root);
    free(root->right);
    free(root->left);
    free(root);
}