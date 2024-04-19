#include <stdio.h>

int main () {

int N, x;
int i = 0;
int cont = 0;
int dont = 0;
scanf("%d", &N);

for (i = 0; i < N; i++){
  scanf("%d", &x);
  
  if (x >= 10 && x <= 20){
      cont++;
  }else{
      dont++;
  }
}
printf("%d in\n", cont);
printf("%d out\n", dont);
return 0;
}
