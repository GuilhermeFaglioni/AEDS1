#include <stdio.h>

int MDC(int n1, int n2) {
    int aux;
    if(n1 % n2 == 0) {
        return n2;
    } else {
        aux = n1 % n2;
        n2 = aux;
        n1 -= n2;
        return MDC(n1, n2);
    }
}

int MMC(int n1, int n2) {
    if (n1*n2 < 0) {
        n1 *= -1;
    }

    return (n1*n2)/MDC(n1, n2);
}

int main() {
    int n1, n2;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite um valor: ");
    scanf("%d", &n2);

    printf("%d", MMC(n1, n2));

    return 0;
}