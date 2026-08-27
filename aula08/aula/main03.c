#include <stdio.h>

typedef struct {
    int rm;
} Aluno;

int main() {
    Aluno aluno[40];
    Aluno *ptr = aluno;
    // (*ptr).rm=10;
    // (*(ptr+1)).rm=20;
    ptr->rm = 10;
    (ptr + 1)->rm = 20;
    printf("%d\n", (*ptr).rm);
    printf("%d\n", (*(ptr + 1)).rm);
    ptr[1].rm = 30; // se for assim usa .
    printf("%d\n", ptr[1].rm);
    for (int i = 0; i < 40; i++)
    {
        (ptr + i)->rm = 20 + i;
        printf("%d\n", (ptr + i)->rm);
    }
    return 0;
}