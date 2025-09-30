#include <stdio.h>

int main() {
    int n;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    
    int n1[n];
    int n2[n];
    
    for(int i = 0; i < n; i++) {
        printf("Digite a n1 do aluno %d:", i + 1);
        scanf("%d", &n1[i]);
        printf("Digite a n2 do aluno %d:", i + 1);
        scanf("%d", &n2[i]);
        printf("\n");
    }

    int soma[n];

    for(int i = 0; i < n; i++) {
        soma[i] = n1[i] + n2[i];
    }

    for(int i = 0; i < n; i++) {
        if(soma[i] > 60) {
            printf("Aluno %d nota %d Aprovado\n", i + 1, soma[i]);
        } else {
            printf("Aluno %d nota %d Reprovado\n", i + 1, soma[i]);
        }
    }

    return 0;
}