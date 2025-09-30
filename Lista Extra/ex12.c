#include <stdio.h>

/*
Escreva um programa que calcule o valor da série S=1/1!+1/2!+1/3!+...+1/N!,
 onde N é um número fornecido pelo usuário. 
 Crie uma função específica para calcular o fatorial de um número.
*/

long long fatorial(int num) {
    if(num == 0) {
        return 1;
    }
    return num * fatorial(num - 1);
}

int main() {
    int num;
    float soma = 0;

    printf("Digite um valor para a série: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        soma += (1.0/fatorial(i));
    }

    printf("Soma da série: %.2f", soma);

    return 0;
}