#include <stdio.h>

//Descubra se existe algum digito igual entre os dois numeros so usando while 

int digitosIguais(int num1, int num2) {
    int aux1 = num1;
    while(aux1 > 0) {
        int dig1 = aux1 % 10;
        int aux2 = num2;
        while(aux2 > 0) {
            int dig2 = aux2 % 10;
            if(dig1 == dig2) {
                return 1;
            }
            aux2 /= 10;
        }
        aux1 /= 10;
    }

    return 0;
}

int main() {
    int num1, num2;
    printf("Digite dois números\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("%d", digitosIguais(num1, num2));

    return 0;
}