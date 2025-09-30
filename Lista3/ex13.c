#include <stdio.h>

int main() {
    int num = 0;
    int resto = 0;
    int inverso = 0;
    int aux = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    aux = num;

    while(num > 0) {
    resto = num % 10;
    inverso = inverso * 10 + resto;
    num /= 10;
    }

    if(inverso == aux) {
        printf("É palindromo");
    } else {
        printf("não é palindromo");
    }

    return 0;
}