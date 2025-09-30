#include <stdio.h>

int main () {
    int num;
    printf("digite uma nota entre 0 e 10: ");
    scanf("%d", &num);

    while(num > 10 || num < 0){
        printf("Digite uma nota válida: ");
        scanf("%d", &num);
    }

    printf("Nota válida");
    return 0;
}