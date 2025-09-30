#include <stdio.h>
#include <stdbool.h>

bool primo(int num) {
    int qtd = 0;
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) {
            qtd++;
        }
    }
    if(qtd == 2) {
        return true;
    } else {
        return false; 
    }
}

int main() {
    int num;
    int qtd = 0;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("\nSão primos: \n");
    for(int i = 0; i <= num; i++) {
        if(primo(i)) {
            printf("%d\n", i);
            qtd++;
        }
    }

    printf("Um total de %d primos", qtd);

    return 0;
}