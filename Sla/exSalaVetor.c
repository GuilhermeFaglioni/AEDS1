#include <stdio.h>

int main() {
    int idades[13];
    int soma = 0;
    for(int i = 0; i <= 12; i++) {
        printf("Digite a idade do aluno %d:", i + 1);
        scanf("%d", &idades[i]);
    }

    for(int i = 0; i <= 12; i++) {
        soma += idades[i];
    }

    printf("A média é %d", soma/12);

    return 0;
}