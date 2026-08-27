#include <stdio.h>

typedef struct {
    int rm;
    char nome[50];
    float nota;
} Aluno;

int main() {
    Aluno aluno[2] = {
        {123, "ana", 9.0},
        {245, "joao", 10.0}};
    Aluno *ptr = aluno;
    printf("%.1f\n", ptr->nota);
    ptr++;
    printf("%.1f\n", ptr->nota);
    printf("%p", &ptr->rm); // endereço do ponteiro
    return 0;
}