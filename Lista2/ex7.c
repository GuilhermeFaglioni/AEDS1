#include <stdio.h>

int main () {
    int num1, num2;
    char op;

    printf("Digite o primeiro número:");
    scanf("%d", &num1);
    printf("\nDigite o segundo número:");
    scanf("%d", &num2);
    printf("\nDigite a operação que quer +, -, /, *:");
    scanf(" %c", &op);

    if(op == '*') {
        printf("\nresultado: %d", num1 * num2);
    } else if (op == '/' && num2 != 0) {
        printf("\nresultado: %.2f", (float)num1 / num2);
    } else if (op == '+') {
        printf("\nresultado: %d", num1 + num2);
    } else if (op == '-') {
        printf("\nresultado: %d", num1 - num2);
    }

    return 0;
}