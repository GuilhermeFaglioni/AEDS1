#include <stdio.h>

int fatorial(int n1) {
    if(n1 <= 1) {
        return 1;
    } else {
        return n1*fatorial(n1-1);
    }
}

int main() {
    int n1, resultado;
    printf("Digite um número e descubra seu fatorial: ");
    scanf("%d", &n1);

    resultado = fatorial(n1);

    printf("o fatorial de %d é %d", n1, resultado);

    return 0;
}