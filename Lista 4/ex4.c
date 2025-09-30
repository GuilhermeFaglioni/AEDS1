#include <stdio.h>

int parImpar(int n1) {
    if(n1 % 2 == 0) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    int n1;
    int resultado;
    printf("Digite um número: ");
    scanf("%d", &n1);

    resultado = parImpar(n1);

    if(resultado == 1) {
        printf("%d é par", n1);
    } else {
        printf("%d é impar", n1);
    }

    return 0;
}