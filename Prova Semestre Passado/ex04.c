#include <stdio.h>
int produtoDig(int n1) {
    int resultado = 1;
    int aux = n1;
    float resto;
    while(aux > 0) {
        resto = aux % 10;
        resultado *= resto;
        aux /= 10;
    }

    return resultado;
}

int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("%d", produtoDig(num));


    return 0;
}