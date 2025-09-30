#include <stdio.h>

int main () {
    int num = 0;
    int aux;
    int i = 0;

    while(i < 5) {
        printf("Digite um número: ");
        scanf("%d", &aux);
        num += aux;
        i++;
    }

    printf("A média é %d", num/5);

    return 0;
}