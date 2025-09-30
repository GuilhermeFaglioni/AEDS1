#include <stdio.h> 

int main () {
    int num1;

    printf("Digite um número:");
    scanf("%d", &num1);

    if(num1 == 0) {
        printf("O numero é zero");
    } else if (num1 % 2 == 0){
        printf("O número é par");
    } else {
        printf("O número é ímpar");
    }

    return 0;
}