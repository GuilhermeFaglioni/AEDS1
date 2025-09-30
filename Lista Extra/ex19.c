#include<stdio.h>

int pot(int n1, int n2) {
    int resultado = 1;
    for(int i = 0; i < n2; i++) {
        resultado *= n1;
    }

    return resultado;
}

int main() {
    int n1, n2;

    printf("Digite uma base: ");
    scanf("%d", &n1);
    printf("Digite um expoente: ");
    scanf("%d", &n2);

    printf("Resultado: %d", pot(n1,n2));

    return 0;
}