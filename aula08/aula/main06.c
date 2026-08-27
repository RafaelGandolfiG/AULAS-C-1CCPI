#include <stdio.h>
#include <string.h>

// criando uma struct com padroes ja preenchidos

typedef struct {
    int rm;
    char nome[50];
    float nota;
} Aluno;

Aluno criar() {
    Aluno a;
    a.rm = 0;
    strcpy(a.nome, "Sem nome");
    a.nota = 0;
    return a;
}

int main() {
    Aluno aluno = criar();
    Aluno *ptr = &aluno;
    printf("%d\n", ptr->rm);
    printf("%s\n", ptr->nome);
    printf("%.1f\n", ptr->nota);
    return 0;
}