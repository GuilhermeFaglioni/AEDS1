#include <stdio.h>

/*
Crie uma função que receba um número inteiro positivo e retorne este número com seus dígitos invertidos (ex: 123 -> 321). 
Em seguida, crie um programa que use essa função para verificar se um número é um palíndromo (capicua).
*/

int inverteNum(int num) {
    int aux = 0;
    int resto = 0;
    while(num > 0) {
        resto = num % 10;
        aux = (aux * 10) + resto;
        num /= 10;
    }
    return aux;

}

int main () {
    int num;
    int inverso;
    printf("Digite um valor: ");
    scanf("%d", &num);

    inverso = inverteNum(num);

    printf("O inverso do num é %d", inverso);

    if(inverso == num) {
        printf(" e é um palíndromo");
    } else {
        printf(" mas não é palíndromo");
    }

    return 0;
}