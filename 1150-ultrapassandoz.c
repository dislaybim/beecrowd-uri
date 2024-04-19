#include <stdio.h>

int main()
{
    int X, Z, i, a=1, soma=0;
    
  scanf("%d", &X);
  
  do{
    scanf("%d", &Z);
  }while(Z <= X);
      
  soma = X; 
  
  do{
    X++;
    soma += X;
    a++;
  } while (soma <= Z);
    
    printf("%d\n", a);

    return 0;
}
