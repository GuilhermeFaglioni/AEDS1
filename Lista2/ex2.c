#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("\nDigite outro numero inteiro: ");
    scanf("%d", &num2); 

    if(num1 > num2) {
        printf("\nO numero %d e maior que %d.\n", num1, num2);
    } else if(num2 > num1) {
        printf("\nO numero %d e maior que %d.\n", num2, num1);
    } else {
        printf("\nOs numeros sao iguais.\n");
    }
}