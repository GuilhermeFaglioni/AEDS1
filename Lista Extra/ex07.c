#include <stdio.h>

/*
Faça um programa que leia a quantidade de alunos de uma turma. 
Em seguida, para cada aluno, leia duas notas, calcule a média e informe se ele está "Aprovado" (média >= 7.0), 
em "Recuperação" (média >= 5.0 e < 7.0) ou "Reprovado" (média < 5.0). 
Ao final, exiba a média geral da turma.
*/

float media(int n1, int n2) {
    return (n1 + n2)/2.0;
}

void aprov(float media) {
    if(media >= 7.0) {
        printf("Aprovado\n");
    } else if(media >= 5.0) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n");
    }
}

int main() {
    int qtdAlunos;
    float somaMedias = 0;

    printf("Quantos alunos tem na turma ? ");
    scanf("%d", &qtdAlunos);

    for(int i = 0; i < qtdAlunos; i++) {
        int n1, n2;
        float mediaAluno;
        printf("\nAluno %d:\n", i + 1);
        printf("Digite a primeira nota desse aluno: ");
        scanf("%d", &n1);
        printf("Digite a segunda nota desse aluno: ");
        scanf("%d", &n2);
        mediaAluno = media(n1, n2);
        printf("Situação: \n");
        aprov(mediaAluno);
        somaMedias += mediaAluno;
    }

    printf("\n A média da turma foi %.1f", somaMedias/qtdAlunos);

    return 0;

}