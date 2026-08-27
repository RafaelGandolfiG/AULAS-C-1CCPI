#include <stdio.h>
#include <string.h>

// criar um aray de structs com padroes ja preenchidos

typedef struct {
    int rm;
    char nome[50];
    float nota;
} Aluno;

void criar(Aluno *aluno) {
    aluno->rm = 0;
    strcpy(aluno->nome, "sem nome");
    aluno->nota = 0.0;
}

void atualiza_nota(Aluno *aluno, float nota) {
    aluno->nota = nota;
}

int main() {
    Aluno alunos[40];
    Aluno *ptr = alunos;
    for (int i = 0; i < 40; i++) {
        criar(ptr + i);
    }
    printf("%.1f\n", ptr->nota);
    ptr++;
    printf("%.1f\n", ptr->nota);
    printf("%p\n", &ptr->rm); // endereço do ponteiro
    atualiza_nota(ptr, 8.0);
    printf("%.1f\n", ptr->nota);
    ptr++;
    atualiza_nota(ptr, 7.0);
    printf("%.1f", ptr->nota);
    return 0;
}