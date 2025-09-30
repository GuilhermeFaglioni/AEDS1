#include <stdio.h>

void somaProc(int n) {
    int soma = 0;
    for(int i = 1; i <= n; i++) {
        soma += i;
    }

    printf("%d\n", soma);
}

int somaFunc(int n) {
    int soma = 0;
    for(int i = 1; i <= n; i++) {
        soma += i;
    }

    return soma;
}

int main() {
    int soma = 0;

    somaProc(10);
    soma = somaFunc(15);
    printf("%d\n", soma);

    return 0;
}