#include <stdio.h>

int main() {
int numero;
int alcool = 0;
int gasolina = 0;
int diesel = 0;

while(numero != 4){
    scanf("%d",&numero);
    
    if(numero == 1){
        alcool+=1;
    }
    else if(numero == 2){
        gasolina+=1;
    }
    else if(numero == 3){
        diesel+=1;
    }
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n", alcool);
printf("Gasolina: %d\n", gasolina);
printf("Diesel: %d\n", diesel);

return 0;
}
