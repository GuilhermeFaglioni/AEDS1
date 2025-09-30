#include <stdio.h>

void conceito(int nota) {
    if(nota <= 39) {
        printf("Conceito F\n");
    } else if (nota <= 59) {
        printf("Conceito E\n");
    } else if (nota <= 69) {
        printf("Conceito D\n");
    } else if (nota <= 79) {
        printf("Conceito C\n");
    } else if (nota <= 89) {
        printf("Conceito B\n");
    } else if (nota >= 90) {
        printf("Conceito A\n");
    }
}

int main () {
    int qtd;
    int nota;
    printf("Digite quantos alunos você precisa saber o conceito: ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++) {
        printf("Digite a nota do aluno: ");
        scanf("%d", &nota);

        conceito(nota);
    }

    return 0;
}