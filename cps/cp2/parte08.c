#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int valor;
    struct No *proximo;
} No;

No *inserirInicio(No *inicio, int valor)
{
    No *novo = malloc(sizeof(No));
    if (novo == NULL)
    {
        return inicio;
    }
    novo->valor = valor;
    novo->proximo = inicio;
    return novo;
}

void imprimirLista(No *inicio)
{
    No *atual = inicio;
    while (atual != NULL)
    {
        printf("%d\n", atual->valor);
        atual = atual->proximo;
    }
}

int buscar(No *inicio, int valor)
{
    No *atual = inicio;
    while (atual != NULL)
    {
        if (atual->valor == valor)
        {
            return 1;
        }
        atual = atual->proximo;
    }
    return 0;
}

int main()
{
    No *inicio = NULL;
    int opcao, valor, resultado;
    do
    {
        printf("\n===== LISTA ENCADEADA =====\n");
        printf("1 - Inserir no inicio\n");
        printf("2 - Mostrar lista\n");
        printf("3 - Buscar valor\n");
        printf("4 - Mostrar primeiro elemento\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Valor: ");
            scanf("%d", &valor);
            inicio = inserirInicio(inicio, valor);
            break;
        case 2:
            imprimirLista(inicio);
            break;
        case 3:
            printf("Valor para buscar: ");
            scanf("%d", &valor);
            resultado = buscar(inicio, valor);
            if (resultado)
            {
                printf("Valor encontrado!\n");
            }
            else
            {
                printf("Valor nao encontrado!\n");
            }
            break;
        case 4:
            if (inicio == NULL)
            {
                printf("Lista vazia!\n");
            }
            else
            {
                printf("Primeiro elemento: %d\n", inicio->valor);
            }
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida\n");
        }
    } while (opcao != 0);
    return 0;
}