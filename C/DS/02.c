#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *prox;
} No;

void AllocarNo(No **head, int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
        return;
    novo->valor = valor;
    novo->prox = *head;
    *head = novo;
}

No *BuscarNo(const No *head, int valor)
{
    for (No *p = head; p != NULL; p = p->prox)
    {
        if (p->valor == valor)
        {
            return p;
        }
    }
    return NULL;
}

int main()
{
    No *head = NULL;
    AllocarNo(&head, 25);
    AllocarNo(&head, 55);
    AllocarNo(&head, 23);
    AllocarNo(&head, 11);
    AllocarNo(&head, 66);
    AllocarNo(&head, 54);
    No *p = BuscarNo(head, 23);
    printf("%d\n", p->valor);
    printf("%p\n", p);
}