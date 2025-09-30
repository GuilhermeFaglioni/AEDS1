#include <stdio.h>

int pot(int n1, int n2) {
    int resultado = 1;
    for(int i = 1; i <= n2; i++) {
        resultado *= n1;
    }

    return resultado;
}

int main() {
    int base, expoente;
    printf("Digite a base da potência: ");
    scanf("%d", &base);
    printf("Digite o expoente da potência: ");
    scanf("%d", &expoente);

    printf("O resultado é: %d", pot(base, expoente));

    return 0;
}