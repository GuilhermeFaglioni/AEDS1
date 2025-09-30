#include <stdio.h>

int mdcFunc(int n1, int n2) {
    int soma = 1;
    for(int i = 2; i <= n1;) {
        if(n1 % i == 0 && n2 % i == 0) {
            soma *= i;
            n1 /= i;
            n2 /= i;
        } else {
            i++;
        }
    }

    return soma;
}

int main() {
    int n1, n2, mdc;

    printf("Digite o valor do numerador: ");
    scanf("%d", &n1);
    printf("Digite o valor do denominador: ");
    scanf("%d", &n2);

    mdc = mdcFunc(n1, n2);

    printf("A fração %d/%d simplificada é %d/%d", n1, n2, n1/mdc, n2/mdc);

    return 0;
}