#include<stdio.h>

/*Implemente uma função recursiva que receba um número inteiro e calcule a soma
de seus dígitos*/

int soma(int num) {
    if(num <= 0) {
        return 0;
    } else {
    return num%10 + soma(num/10);
    }
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O num é %d", soma(num));

    return 0;
}