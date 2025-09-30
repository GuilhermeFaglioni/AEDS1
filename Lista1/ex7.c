#include <stdio.h>

int main () {
    int valor;
    int antecessor;
    int sucessor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    antecessor = valor - 1;
    sucessor = valor + 1;

    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0;
}