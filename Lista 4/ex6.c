#include <stdio.h>

int primo(int n1) {
    int qtd = 0;
    for(int i = 1; i <= n1; i++){
        if(n1 % i == 0) {
            qtd++;
        } 
    }
    return qtd;
}

int main() {
    int n1;
    printf("Digite um valor: ");
    scanf("%d", &n1);

    if(primo(n1) <= 2) {
        printf("É primo");
    } else {
        printf("Não é primo");
    }

    return 0;
}