#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade:");
    scanf("%d", &idade);

    if(idade < 16) {
        printf("Não pode votar");
        return 0;
    } else if(idade < 18 || idade > 70) {
        printf("Voto Facultativo");
        return 0;
    } else if (idade >= 18 && idade < 70) {
        printf("Voto Obrigatório");
        return 0;
    }
}