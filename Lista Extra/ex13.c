#include <stdio.h>
#include<math.h>

int contaDigitos(int num) {
    int qtd = 0;
    while(num > 0) {
        num /= 10;
        qtd++;
    } 
    return qtd;
}

int potNum(int num) {
    int soma = 0;
    int aux;
    int qtd;
    qtd = contaDigitos(num);

    while(num > 0) {
        aux = num % 10;
        soma += pow(aux, qtd);
        num /= 10;
    }

    return soma;

}

int main() {
    int num;
    int armstrong;

    printf("Digite um número: ");
    scanf("%d", &num);

    armstrong = potNum(num);

    if(num == armstrong) {
        printf("%d é um número de Armstrong", num);
    } else {
        printf("%d não é um número de Armstrong", num);
    }

    return 0;
}