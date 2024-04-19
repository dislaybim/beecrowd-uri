#include <stdio.h>

int main() {
int maior, x;
scanf("%d",&maior);

while(x != 0){
    scanf("%d",&x);
    if(x > maior){
        maior = x;
    }
}
printf("%d\n", maior); 

return 0;
}
