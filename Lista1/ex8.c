#include <stdio.h>

int main () {
    int n1, n2, n3, n4;
    int resultado;

    printf("digite a nota do primeiro aluno: ");
    scanf("%d", &n1);
    printf("\ndigite a nota do segundo aluno: ");
    scanf("%d", &n2);
    printf("\ndigite a nota do terceiro aluno: ");
    scanf("%d", &n3);
    printf("\ndigite a nota do quarto aluno: ");
    scanf("%d", &n4);

    resultado = (n1 + n2 + n3 + n4)/4;

    printf("\nA media dos alunos e: %d\n", resultado);

    return 0;
}