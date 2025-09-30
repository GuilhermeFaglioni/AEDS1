#include <stdio.h>

int fatorial (int n1) {
    if(n1 == 1) {
        return 1;
    } else {
    return n1 * fatorial(n1 - 1);
    }
}

int somaRec(int n1) {
    int aux = (n1 % 10);
    int prox = n1 / 10;
    if(n1 <= 0) {
        return 0;
    } else {
        return aux + somaRec(prox);
    }
}

int main () {
    int n1, n2;
    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("O fatorial de %d é %d \n", n1, fatorial(n1));
    
    printf("Agora um valor para soma dos digitos: ");
    scanf("%d", &n2);

    printf("A soma dos digitos de %d é %d", n2, somaRec(n2));

    return 0;
}