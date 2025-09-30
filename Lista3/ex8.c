#include <stdio.h>

int main() {
    int num;
    int aux;
    printf("Digite um número e descubra seu fatorial: ");
    scanf("%d", &num);

    aux = num;
    while(num > 1) {
        aux *= num -1;
        num--;
    }

    printf("O fatorial é %d", aux);
}