#include <stdio.h>

int main() {
    float constante = 12;
    int tempo, velocidade;
    float litros, espaco;
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    espaco = velocidade*tempo;
    litros = espaco/constante;
    printf("%.3f\n", litros);
    return 0;
}
