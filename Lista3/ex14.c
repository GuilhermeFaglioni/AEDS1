#include <stdio.h>

int main () {
    int base, pot, resultado;

    printf("Digite uma base: ");
    scanf("%d", &base);
    printf("Digite um expoente: ");
    scanf("%d", &pot);

    resultado = base;

    for(int i = 0; i < pot - 1; i++) {
        resultado *= base;
    }

    printf("O resultado da potência de base %d e expoente %d é %d", base, pot, resultado);
    return 0;
}