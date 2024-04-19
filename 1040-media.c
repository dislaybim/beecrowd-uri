#include <stdio.h>

int main() {
   double a, b, c, d, media, final, resultado;
   scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
   media = (a*2 + b*3 + c*4 + d)/10;
   
    if (media >= 7){
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }
    else if (media < 5){
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5 && media < 7){
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        scanf("%lf", &final);
        resultado = (final + media)/2;
        printf("Nota do exame: %.1lf\n", final);
       
        if (resultado >= 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", resultado);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", resultado);
        }
    }
    return 0;
}
