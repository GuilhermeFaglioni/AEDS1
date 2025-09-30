#include <stdio.h>

int main () {
    int nota;

    printf("Digite a nota:");
    scanf("%d", &nota);

    if(nota <= 3) {
        printf("Conceito E");
        return 0;
    } else if(nota <= 5) {
        printf("Conceito D");
        return 0;
    } else if(nota <= 7){
        printf("Conceito C");
        return 0;
    } else if(nota <= 9){
        printf("Conceito B");
        return 0;
    } else if(nota <= 10){
        printf("Conceito A");
        return 0;
    }

    return 0;
}