#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    char disponivel[50];
} Livro;

void disponibilidade(Livro *livro) {
    strcpy(livro->disponivel, "emprestado");
}

void criar(Livro *livros) {
    livros->id = 0;
    strcpy(livros->nome, "sem nome");
    strcpy(livros->disponivel, "disponivel");
}

int main() {
    Livro livros[3];
    Livro *ptr = livros;
    for (int i = 0; i < 3; i++) {
        criar(ptr + i);
    }
    for (int i = 0; i < 3; i++) {
        char nome[50];
        printf("Digite o nome do livro: ");
        scanf("%s", &nome);
        (ptr + i)->id = i + 1;
        strcpy((ptr + i)->nome, nome);
    }
    char livro[50];
    printf("Qual livro voce quer? ");
    scanf("%49s", livro);
    for (int i = 0; i < 3; i++) {
        if ((strcmp((ptr + i)->nome, livro) == 0)) {
            disponibilidade((ptr + i));
            printf("O livro: %s esta %s\n", (ptr + i)->nome, (ptr + i)->disponivel);
            break;
        }
    }
    return 0;
}