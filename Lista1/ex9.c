#include <stdio.h>

int main () {
    int valor1, valor2;
    int soma, produto, diferenca, quociente;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);
    
    soma = valor1 + valor2;
    produto = valor1 * valor2;
    diferenca = valor1 - valor2;
    quociente = valor1 / valor2;
    
    printf("A soma dos valores é: %d\nO produto é: %d\nA diferenca é: %d\nO quociente é: %d\n", soma, produto, diferenca, quociente);
    
    return 0;
}