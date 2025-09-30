#include <stdio.h>

/*Implemente uma função recursiva que conte o número de dígitos de um número
inteiro.*/

int contaDig(int num) {
    if(num <= 0) {
        return 0;
    } else {
        return 1 + contaDig(num/10);
    }
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(num <= 0) {
        printf("1");
        return 0;
    }

    printf("O num é %d", contaDig(num));

    return 0;
}