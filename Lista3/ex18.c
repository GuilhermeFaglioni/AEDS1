#include <stdio.h>

int main () {
    int continuar = 1;
    int escolha;
    int v1, v2;

    while(continuar != 0) {
        printf("Menu\n1. Multiplicação\n2. Divisão\n3. Adição\n4. Subtração\nSua escolha: ");
        scanf("%d", &escolha);
        printf("\nAgora digite o primeiro valor da operação: ");
        scanf("%d", &v1);
        printf("Agora digite o segundo valor da operação: ");
        scanf("%d", &v2);

        if(escolha == 1) {
            int resultado = v1 * v2;
            printf("\nO resultado da multiplicação é %d", resultado);
        } else if (escolha == 2) {
            int resultado = v1 / v2;
            printf("\nO resultado da divisão é %d", resultado);
        } else if (escolha == 3) {
            int resultado = v1 + v2;
            printf("\nO resultado da adição é %d", resultado);
        } else if (escolha == 4) {
            int resultado = v1 - v2;
            printf("\nO resultado da subtração é %d", resultado);
        }

        printf("\n Para continuar digite 1, para encerrar digite 0: ");
        scanf("%d", &continuar);
    }

    return 0;

}