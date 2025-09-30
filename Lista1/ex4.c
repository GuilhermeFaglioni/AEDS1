#include <stdio.h>

int main () {
    int a = 2;
    int b = 4;
    int aux;

    printf("O valor de a é %d e o valor de b é %d \n", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("O valor de a é %d e o valor de b é %d \n", a, b);
    
    return 0;
}