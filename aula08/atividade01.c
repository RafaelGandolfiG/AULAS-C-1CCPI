#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    float preco;
}Produto;


int main() {
    Produto produtos[4];

    produtos[0].id=123;
    strcpy(produtos[0].nome,"manteiga");
    produtos[0].preco=15;

    printf("produtos cadastrados\n");
    printf("nome do produto | ID | Preco\n");
    printf("%s | %d | R$ %.2f",produtos[0].nome,produtos[0].id, produtos[0].preco);

    return 0;
}