#include <stdio.h>

typedef struct {
    int rm;
    char nome[50];
    float nota;
} Aluno;

void atualiza_nota(Aluno *a, float valor) {
    a->nota = valor;
}

int main() {
    Aluno aluno[2] = {
        {123, "ana", 9.0},
        {245, "joao", 10.0}};
    Aluno *ptr = aluno;
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