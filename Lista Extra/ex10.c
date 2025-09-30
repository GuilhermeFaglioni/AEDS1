#include <stdio.h>

/*
Dois números são chamados de amigos se a soma dos divisores próprios de um é igual ao outro, e vice-versa. 
Ex: 220 e 284. Faça um programa que leia dois números e determine se eles são amigos. 
Crie uma função auxiliar para calcular a soma dos divisores.
*/

int somaDivisores(int num) {
    int soma = 0;
    for(int i = 0; i < (num/2) + 1; i++) {
        if(num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main () {
    int num1, num2, soma1, soma2;

    printf("Digite um valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    soma1 = somaDivisores(num1);
    soma2 = somaDivisores(num2);

    if(soma1 == num2 && soma2 == num1) {
        printf("São números amigos");
    } else {
        printf("Não são números amigos");
    }

    return 0;

}