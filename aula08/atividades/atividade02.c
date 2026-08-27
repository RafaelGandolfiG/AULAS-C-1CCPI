#include <stdio.h>

typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

void aplicarDesconto(Produto *p, float desc) {
    if (desc <= 100 && desc >= 0) {
        printf("Desconto invalido\n");
        do {
            desc = printf("Digite um desconto valido: ");
            scanf("%f", &desc);
        } while (desc > 100 && desc < 0);
    }
    p->preco -= (desc / 100) * p->preco;
}

int main() {
    Produto prod = {1, "Teclado", 150.0};
    Produto *ptr = &prod;
    aplicarDesconto(ptr, 10.0);
    printf("%.2f", ptr->preco);
    return 0;
}