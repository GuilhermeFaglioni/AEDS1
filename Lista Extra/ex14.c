#include <stdio.h>

/*
Crie um programa que solicite um valor de saque (inteiro) e informe quantas cédulas de R100,R50, R20,R10, R5eR2 
são necessárias para compor esse valor, priorizando sempre as cédulas de maior valor.
*/

int main() {
    int valor;
    int r100 = 0;
    int r50 = 0;
    int r20 = 0;
    int r10 = 0;
    int r5 = 0;
    int r2 = 0;

    printf("Digite quanto você quer sacar: ");
    scanf("%d", &valor);

    while(valor > 0) {
        if(valor - 100 > 1) {
            r100++;
            valor -= 100;
        } else if(valor - 50 > 1) {
            r50++;
            valor -= 50;
        } else if(valor - 20 > 1) {
            r20++;
            valor -= 20;
        } else if(valor - 10 > 1) {
            r10++;
            valor -= 10;
        } else if(valor - 5 > 1) {
            r5++;
            valor -= 5;
        } else if(valor - 2 >= 0) {
            r2++;
            valor -= 2;
        }
    }

    printf("Serão necessários: \n");
    printf("%d notas de 100\n", r100);
    printf("%d notas de 50\n", r50);
    printf("%d notas de 20\n", r20);
    printf("%d notas de 10\n", r10);
    printf("%d notas de 5\n", r5);
    printf("%d notas de 2\n", r2);

    return 0;
}