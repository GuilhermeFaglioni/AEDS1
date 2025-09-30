#include <stdio.h>

int main() {
    float salario;

    printf("Digite o salário sem pontuações: ");
    scanf("%f", &salario);

    if(salario <= 1500) {
        salario *= 1.1;
    } else if(salario <= 3000) {
        salario *= 1.07;
    } else {
        salario *= 1.05;
    }

    printf("Novo salario: R$%.2f", salario);

    return 0;
}