//uri 1073:QUADRADO DE PARES
#include <stdio.h>

int main() {
   int N;
   int i;
   scanf("%d", &N);
   for (i = 1; i <= N; i++){
       if(i%2 == 0)
       printf("%d^2 = %d\n", i, i*i);
   }
    return 0;
}
