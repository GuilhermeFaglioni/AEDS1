#include <stdio.h>

int main () {
    int valor1, valor2;
    int soma;
    int produto;
    int diferenca;

    printf("Digite dois valores e consiga sua soma, produto e diferenca: \n");
    printf("Valor 1:");
    scanf("%d", &valor1);
    printf("\nValor 2:");
    scanf("%d", &valor2);

    soma = valor1 + valor2;
    produto = valor1 * valor2;
    diferenca = valor1 - valor2;

    printf("\nA soma é: %d \nO produto é: %d \nA diferença é: %d \n", soma, produto, diferenca);
    
    return 0;
}