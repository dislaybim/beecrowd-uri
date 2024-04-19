#include <stdio.h>

int main(){
    float salario, reajuste, novo;
    scanf("%f", &salario);
    
    if (salario > 0 && salario <= 400){
        reajuste = salario * 0.15;
        novo = salario + reajuste;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %%\n");
    }
    if ( salario > 400 && salario <= 800 ){
        reajuste = salario * 0.12;
        novo = salario + reajuste;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%\n");
    }
    if (salario > 800 && salario <= 1200){
        reajuste = salario * 0.1;
        novo = salario + reajuste;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %%\n");
    }
    if (salario > 1200  && salario <= 2000){
        reajuste = salario * 0.07;
        novo = salario + reajuste;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %%\n");
    }    
    if (salario > 2000){
        reajuste = salario * 0.04;
        novo = salario + reajuste;
        printf("Novo salario: %.2f\n", novo);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
