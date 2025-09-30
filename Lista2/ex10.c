#include <stdio.h>

int main () {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade <= 12) {
        printf("Criança");
        return 0;
    } else if(idade <= 17){
        printf("Adolescente");
        return 0;
    } else if(idade <= 64){
        printf("Adulto");
        return 0;
    } else {
        printf("Idoso");
        return 0;
    }

    return 0;
}