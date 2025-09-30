#include <stdio.h>

int main () {
    int n1, n2, n3;

    printf("Digite o primeiro número:");
    scanf("%d", &n1);
    printf("Digite o segundo número:");
    scanf("%d", &n2);
    printf("Digite o terceiro número:");
    scanf("%d", &n3);

    if(n3 % 2 == 0 || n2 % 2 == 0 || n1 % 2 == 0) {
        printf("Um deles é par");
    } else {
        printf("Nenhum deles é par");
    }

    return 0;
}