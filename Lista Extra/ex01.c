#include <stdio.h>

int primo(int n) {
    int qtd = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            qtd++;
        }
    }
    if(qtd == 2) {
        return 1;
    } else {
        return 2;
    }
}

int main() {
    int num, aux;
    printf("Digite um valor: ");
    scanf("%d", &num);
    aux = num;
    for(int i = 0; i <= num; i++) {
        if(primo(i) == 1) {
            if(num % i == 0) {
                printf("%d\n", i);
                num /= i;
                i -= 1;
            }
        }

    }

    return 0;
}