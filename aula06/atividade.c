#include <stdio.h>
#include <string.h>

int main() {
    char user_name[20];
    printf("---Login---\n");
    printf("User name: ");
    fgets(user_name,20,stdin);
    user_name[strcspn(user_name,"\n")]='\0';
    
    int tamanho;
    printf("%d\n",strlen(user_name));
    printf("%d\n",strlen("admin"));
    printf("%d\n",(user_name=="admin")==0);
    
    if ((strcmp(user_name,"admin")==0)){
        printf("Acesso liberado");
    }
    else{
        printf("Acesso negado");
    }
    
    return 0;
}