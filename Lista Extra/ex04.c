#include<stdio.h>

int inverteNum(int n) {
    int resto;
    int aux = 0;
    while(n > 0) {
        resto = n % 10;
        aux = aux * 10 + resto;
        n /= 10;
    }

    return aux;
}

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);

    for(int i = n + 1; i++;) {
        if(i == inverteNum(i)){
            printf("O próximo palíndromo é %d", i);
            break;
        }
    }

    return 0;
}