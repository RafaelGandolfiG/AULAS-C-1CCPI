#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto produtos[4];

    produtos[0].id = 123;
    strcpy(produtos[0].nome, "manteiga");
    produtos[0].preco = 15;

    /*
        int tamanho=sizeof(produtos)/sizeof(produtos[0]);

        for(int i=0;i<tamanho;i++){
            printf("Digite o id do produto: ");
            scanf("%d",&produtos[i].id);
            printf("Digite o nome do produto: ");
            scanf("%s",produtos[i].nome);
            printf("Digite o preco do produto: ");
            scanf("%f",&produtos[i].preco);
        }
        printf("produtos cadastrados\n");
        printf("nome do produto | ID | Preco\n");
        for(int i=0;i<tamanho;i++){
            printf("%s | %d |R$ %.2f", produtos[i].nome, produtos[i].id, produtos[i].preco);
        }
    */

    printf("produtos cadastrados\n");
    printf("nome do produto | ID | Preco\n");
    printf("%s | %d | R$ %.2f\n", produtos[0].nome, produtos[0].id, produtos[0].preco);

    return 0;
}