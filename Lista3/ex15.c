#include <stdio.h>
#include <math.h>

int main () {
    int num, resto, resultado, expo, aux;
    expo = 0;
    resultado = 0;
    
    printf("Digite um número em binário: ");
    scanf("%d", &num);
    aux = num;

    while(num > 0){
        resto = num % 10;
        resultado += resto * pow(2, expo);
        num /= 10;
        expo++;
    }

    printf("O binário %d em decimal é %d", aux, resultado);

    return 0;
}