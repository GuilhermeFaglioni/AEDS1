#include <stdio.h>

int main () {
    float valor1, valor2, valor3, valor4;
    float media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);
    printf("Digite o quarto valor: ");
    scanf("%f", &valor4);

    media = ((valor1 * 2) + valor2 + (valor3 * 3) + (valor4 * 4)) / (2 + 1 + 3 + 4);

    printf("A media ponderada é: %.2f\n", media);

    return 0;
} 