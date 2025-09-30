#include <stdio.h>

/*Crie uma função recursiva que verifique se um número inteiro é um palíndromo
(lê-se da mesma forma de trás para frente).*/

int palindromo(int num, int aux) {
    if(num <= 0) {
        return aux;
    } else {
        aux = (aux*10) + num%10;
        num /= 10;
        return palindromo(num, aux);
    }
}

int main() {
    int n1;
    int aux = 0;
    printf("Digite un valor: ");
    scanf("%d", &n1);

    if(n1 == palindromo(n1, aux)) {
        printf("É palindromo");
    } else {
        printf("Não é palindromo");
    }

    return 0;
}