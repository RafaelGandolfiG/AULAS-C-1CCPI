#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int dado;             // a informação
    struct Node *proximo; // o link
};

void inserirInicio(struct Node **head, int valor)
{
    struct Node *novo = malloc(sizeof(struct Node));
    novo->dado = valor;
    novo->proximo = *head;
    *head = novo;
}

int main(void)
{
    struct Node *No;

    No = (struct Node *)malloc(sizeof(struct Node));
    // printf("%d\n", No->dado);
    No->dado = 30;
    No->proximo = NULL;
    // printf("%d\n", No->dado);
    if (No == NULL)
    {
        printf("Erro: Memoria insuficiente");
        exit(1);
    }

    inserirInicio(&No, 20);
    inserirInicio(&No, 10);

    return 0;
}
