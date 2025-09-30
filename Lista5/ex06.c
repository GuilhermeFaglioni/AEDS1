#include <stdio.h>

/*Escreva uma função recursiva que calcule o máximo divisor comum (MDC) de dois
números inteiros.*/

int mdc(int n1, int n2) {
    int resto = n1 % n2;
    if(resto != 0) {
        return mdc(n2, resto);
    } else {
        return n2;
    }
}

int main() {
    int n1, n2;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite um valor: ");
    scanf("%d", &n2);

    printf("%d", mdc(n1, n2));

    return 0;
}