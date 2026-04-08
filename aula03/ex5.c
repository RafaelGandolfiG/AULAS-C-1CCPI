#include <stdio.h>

int main() {
    int i=1;
    int soma=0;
    while (i<=5){
        soma+=i;
        i++;
    }
    printf("%d",soma);
    return 0;
}