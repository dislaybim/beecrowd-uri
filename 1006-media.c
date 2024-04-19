#include <stdio.h>

int main() {
   double A, B, C, media;
   
   scanf("%lf", &A);
   scanf("%lf", &B);
   scanf("%lf", &C);
   
   media = 0.2*A + 0.3*B + 0.5*C;
   
   printf("MEDIA = %.1lf\n", media);
    return 0;
}
