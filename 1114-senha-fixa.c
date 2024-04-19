// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int verificacao, i;
   for(i = 1; i<100; i++){
        int senha = 2002;
        scanf("%d", &verificacao);
        if(verificacao == senha){
            printf("Acesso Permitido\n");
            break;
        }else{
            printf("Senha Invalida\n");
        }    
        }
    return 0;
}
