#include <stdio.h>

int main(){
    int num;
    int aux;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for (int i = num; i > 1; i--) {
        aux += i;
    }

    printf("A soma é: %d", aux);

    return 0;
}