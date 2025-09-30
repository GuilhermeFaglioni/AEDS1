#include <stdio.h>
#include <stdbool.h>

bool parImpar(int num) {
    if(num % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int collatz(int num) {
    int qtd = 0;
    while(num != 1) {
        if(parImpar(num)){
            num /= 2;
            qtd++;
        } else {
            num = 3*num + 1;
            qtd++;
        }
    }
    return qtd;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("%d", collatz(num));

    return 0;
}