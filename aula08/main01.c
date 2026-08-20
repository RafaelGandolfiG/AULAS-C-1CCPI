#include <stdio.h>
#include <string.h>

struct Aluno {
    int rm;
    char nome[50];
    float nota;
};

int main() {
    struct Aluno aluno[40];
    aluno[0].rm = 123456;
    strcpy(aluno[0].nome, "joao");
    printf("%s\n", aluno[0].nome);
    printf("%d\n", aluno[0].rm);
    return 0;
}