#include <stdio.h>

int soma (int n1, int n2) {
    return (n1+n2);
}

int main () {
    int n1, n2;
    
    printf("Digite dois números para descobrir sua soma\n");
    printf("Primeiro valor: ");
    scanf("%d", &n1);
    printf("Segundo valor: ");
    scanf("%d", &n2);

    printf("%d", soma(n1, n2));

    return 0;
}