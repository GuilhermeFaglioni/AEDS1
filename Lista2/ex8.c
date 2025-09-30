#include <stdio.h>

int main () {
    int num1, num2, num3;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);
    printf("Digite o segundo valor: ");
    scanf("%d", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3){
        printf("%d é o maior.", num1);
    } else if(num2 > num1 && num2 > num3) {
        printf("%d é o maior", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("%d é o maior", num3);
    }
}