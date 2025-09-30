#include <stdio.h>

int qtdDigitos(int n1){
    int qtd = 0;
    while(n1 > 0) {
        n1 /= 10;
        qtd++;
    }

    return qtd;
}

int main() {
    int n1;
    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("O número %d tem %d dígitos", n1, qtdDigitos(n1));

    return 0;
}