#include <stdio.h>

int main () {
    int valor = 0;
    int n100 = 0;
    int n50 = 0;
    int n20 = 0;
    int n10 = 0;
    int n5 = 0;
    int n1 = 0;

    printf("Digite um valor em reais: ");
    scanf("%d", &valor);

    do {
        if(valor - 100 >= 0) {
            n100++;
            valor -= 100;
        } else if(valor - 50 >= 0) {
            n50++;
            valor -= 50;
        } else if(valor - 20 >= 0) {
            n20++;
            valor -= 20;
        } else if(valor - 10 >= 0) {
            printf("Aqui 10");
            n10++;
            valor -= 10;
        } else if(valor - 5 >= 0) {
            n5++;
            valor -= 5;
        } else if(valor - 1 >= 0) {
            n1++;
            valor--;
        }
    } while(valor > 0);

    printf("O seguinte valor em notas seriam na seguinte disposição:\n%d notas de 100,\n%d notas de 50,\n%d notas de 20,\n%d notas de 10,\n%d notas de 5,\n%d notas de 1", n100, n50, n20, n10, n5, n1);

    return 0;
        
}