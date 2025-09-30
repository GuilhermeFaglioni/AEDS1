#include <stdio.h>

/*
 Escreva um programa que leia 10 números inteiros e, ao final, exiba qual foi o segundo maior valor inserido.
*/

int main() {
    int maiorN = 0; 
    int maiorN2 = 0;
    int num;

    for(int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &num);
        if(num > maiorN) {
            maiorN2 = maiorN;
            maiorN = num;
        } else if(num < maiorN && num > maiorN2) {
            maiorN2 = num;
        }
    }

    printf("O segundo maior número digitado foi: %d", maiorN2);

    return 0;
}