#include <stdio.h>
#include <stdlib.h>

int main(){
    int X[10];
    int i;
    for (i=0; i<10; i++){
        scanf("%i",&X[i]); 
     //adicionar os valores das posições dos vetores        
     }
    for (i=0; i<10; i++){
    //fazer o esquema pra trocar os valores por 1
        if(X[i] <= 0){
            X[i] = 1;
            }
        }
    for (i=0; i<10; i++){
        printf("X[%d] = %d\n", i,X[i]);
        }
     return 0;
}
