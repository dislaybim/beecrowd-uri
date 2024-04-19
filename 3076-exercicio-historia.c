#include <stdio.h>

int main() {
    int ano, seculo;
    while (scanf("%i", &ano) != EOF) {
        seculo = ano / 100;
        if (ano % 100 != 0)
            seculo++;
        printf("%i\n", seculo);
    }
    return 0;
}
