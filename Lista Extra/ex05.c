#include <stdio.h>
#include <stdbool.h>

bool perfeito(int num) {
    int soma = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
        soma += i;
        }
    }
    if(soma == num) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;
    printf("Digite um número e descubra se ele é perfeito: ");
    scanf("%d", &num);

    if(perfeito(num)) {
        printf("É perfeito");
    } else {
        printf("Não é perfeito");
    }

    return 0;
}