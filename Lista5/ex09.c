#include <stdio.h>

/*Implemente uma função recursiva que calcule a soma de todos os números pares
até um número n.*/

int somaPar(int num) {
    if(num == 0) {
        return 0;
    } else if(num % 2 == 0) {
        return num + somaPar(num - 1);
    } else {
        return somaPar(num - 1);
    }
}

int main() {
    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    printf("A soma é %d", somaPar(num));

    return 0;
}