#include <stdio.h>

/*Escreva uma função recursiva que calcule o fatorial de um número inteiro
não-negativo.*/

int fatorial(int num) {
    if (num == 1 || num <= 0) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O fatorial é %d", fatorial(num));

    return 0;
}