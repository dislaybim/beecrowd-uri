#include <stdio.h>

int main () {

float a, media = 0, contm = 0;
int i;
int p = 0;

for (i = 0; i < 6; i++){

  scanf("%f", &a);
  if (a > 0){

    p++;
    contm += a;

  }
}

media = contm/p;
printf("%d valores positivos\n", p);
printf("%.1f\n", media);
return 0;

}
