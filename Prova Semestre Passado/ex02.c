#include <stdio.h>

int main() {
    int num;
    float soma = 0.0;

    printf("Digite um valor: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++) {
        float frac = i*i/(2.0*i);
        soma += frac;
    }

    printf("Resultado: %.2f", soma);

    return 0;
}