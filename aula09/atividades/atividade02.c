#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int dado;
    struct Node *proximo;
} Node;

int main() {
    Node *n1;
    Node *n2;
    Node *n3;

    n1 = malloc(sizeof(Node));
    n2 = malloc(sizeof(Node));
    n3 = malloc(sizeof(Node));

    n1->dado = 10;
    n2->dado = 20;
    n3->dado = 30;

    n1->proximo = n2;
    n2->proximo = n3;
    n3->proximo = NULL;

    printf("%d\n", n1->dado);
    printf("%d\n", n1->proximo->dado);
    printf("%d\n", n1->proximo->proximo->dado);

    free(n1);
    free(n2);
    free(n3);

    return 0;
}