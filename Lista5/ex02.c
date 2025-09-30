#include <stdio.h>

/*Crie uma função recursiva que calcule o n-ésimo termo da sequência de
Fibonacci.*/

int fibo(int num) {
    if(num <= 1 || num == 2) {
        return 1;
    } else {
        return fibo(num - 2) + fibo(num - 1);
    }
}

int main() {
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O num é %d", fibo(num));

    return 0;
}