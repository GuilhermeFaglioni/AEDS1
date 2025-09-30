#include <stdio.h>

float media(int n1,int n2 ,int n3) {
    return (n1 + n2 + n3)/3;
}

int main() {
    int n1, n2, n3;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    printf("\na média é: %d", media(n1, n2, n3));

    return 0;
}