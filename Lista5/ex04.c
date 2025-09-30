#include <stdio.h>

/*Desenvolva uma função recursiva que verifique se um número inteiro é primo.*/

int primo(int num, int divisor) {
    if(divisor == 1) {
        return 1;
    } if(num % divisor == 0) {
        return 1 + primo(num, divisor - 1);
    } else {
        return primo(num, divisor - 1);
    }
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(primo(num, num) == 2) {
        printf("É primo");
    } else {
        printf("Não é primo");
    }

    return 0;
}