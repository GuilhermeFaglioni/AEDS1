#include <stdio.h>
//mdc pelo alg de Euclides
int mdc(int n1, int n2){
    int aux = 1;
    while(n1 % n2 != 0) {
        if(n1 % n2 != 0) {
        aux = n1 % n2;
        }
        n1 = n2;
        n2 = aux;
    }

    return aux;
}


int main() {
    int n1, n2;
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("O mdc é %d", mdc(n1, n2));
    return 0;
}
