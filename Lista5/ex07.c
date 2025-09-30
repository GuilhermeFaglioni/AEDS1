#include <stdio.h>

/*Implemente uma função recursiva que calcule a soma dos n primeiros números
naturais (1, 2, 3, ..., n).*/

int soma(int num) {
    if(num == 1) {
        return 1;
    } else {
        return num + soma(num - 1);
    }
}

int main() {
    int n1;
    printf("Digite un valor: ");
    scanf("%d", &n1);

    printf("%d", soma(n1));

    return 0;
}