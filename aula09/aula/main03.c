#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int dado;
    struct Node *proximo;
} Node;

void inserirInicio(Node **head, int valor) {
    Node *novo = malloc(sizeof(Node));
    novo->dado = valor;
    novo->proximo = *head;
    *head = novo;
}

void imprimirLista(Node *head) {
    printf("Imprimindo a lista\n");
    Node *atual = head;
    while (atual != NULL) {
        printf("%d\n", atual->dado);
        atual = atual->proximo;
    }
    printf("NULL\n");
}

Node *buscar(Node *head, int alvo) {
    Node *atual = head;
    while (atual != NULL) {
        if (atual->dado == alvo) {
            return atual;
        }
        atual = atual->proximo;
    }
    return NULL;
}

void remover(Node **head, int alvo) {
    if (*head == NULL) {
        return;
    }
    Node *atual = *head;
    Node *anterior = NULL;
    while (atual != NULL && atual->dado != alvo) {
        anterior = atual;
        atual = atual->proximo;
    }
    if (atual == NULL) {
        return;
    }
    if (anterior == NULL) {
        *head = atual->proximo;
    }
    else {
        anterior->proximo = atual->proximo;
    }
    free(atual);
}

void limparLista(Node **head) {
    Node *temp;
    while (*head != NULL) {
        temp = *head;
        *head = (*head)->proximo;
        free(temp);
    }
}

void removerPrimeiro(Node **head) {
    if (*head == NULL) {
        return;
    }
    Node *temp = *head;
    *head = (*head)->proximo;
    free(temp);
}

void removerUltimo(Node **head) {
    if (*head == NULL) {
        return;
    }
    if ((*head)->proximo == NULL) {
        free(*head);
        *head = NULL;
        return;
    }
    Node *atual = *head;
    Node *anterior = NULL;
    while (atual->proximo != NULL) {
        anterior = atual;
        atual = atual->proximo;
    }
    anterior->proximo = NULL;
    free(atual);
}

int main() {
    Node *No;
    No = malloc(sizeof(Node));

    printf("Valor do No: %d\n", No->dado);

    No->dado = 10;
    No->proximo = NULL;

    if(No == NULL) {
        printf("Erro: Memoria insuficiente!\n");
        exit(1);
    }

    printf("Valor do inicio: %d\n", No->dado);

    inserirInicio(&No, 20);
    inserirInicio(&No, 30);
    inserirInicio(&No, 40);

    printf("Valor do novo inicio: %d\n", No->dado);
    printf("Valor do proximo do novo inicio: %d\n", No->proximo->dado);
    printf("Valor do proximo do proximo do atual %d\n", No->proximo->proximo->dado);

    imprimirLista(No);

    int alvo = 20;
    Node *novoNo;
    novoNo = buscar(No, alvo);
    printf("O valor buscado -> %d.\nValor encontrado -> %d\n", alvo, novoNo->dado);

    remover(&No, 30);
    printf("Valor que sera removido: %d\n", 30);
    printf("Novo inicio -> %d\n", No->dado);
    imprimirLista(No);

    removerPrimeiro(&No);
    printf("Removendo o primeiro elemento\n");
    printf("Novo inicio -> %d\n", No->dado);
    imprimirLista(No);

    removerUltimo(&No);
    printf("Removendo o ultimo elemento\n");
    printf("Novo inicio -> %d\n", No->dado);
    imprimirLista(No);

    limparLista(&No);
    printf("Limpando a lista\n");

    return 0;
}