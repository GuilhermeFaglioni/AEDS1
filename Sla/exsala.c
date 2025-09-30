#include <stdio.h>

int main () {
    int num;
    for(int i = 0; i < 10; i++) {
        printf("Digite um número: ");
        scanf("%d", &num);
        if(num == 5) {
            printf("Número encontrado");
            return 0;
        }
    }
    printf("Número não encontrado!");

    return 0;
}