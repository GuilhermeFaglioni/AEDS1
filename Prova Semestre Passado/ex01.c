#include <stdio.h>

/*Leia numeros positvos at[e um negativo ser digitado */



int main () {
    int num;
    int m4 = 0;
    int m6 = 0;
    int quant = 0;
    int media = 0;
    int qMedia = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    while(num > 0){
        if(num > 0) {
            quant++;
            if(num % 4 == 0) {
                printf("É divisível por 4\n");
                m4++;
            }
            if(num % 6 == 0) {
                printf("É divisível por 6\n");
                m6++;
            }
            if(num % 4 != 0 && num % 6 != 0) {
                media += num;
                qMedia++;
            }
        }
        printf("Digite um número: ");
        scanf("%d", &num);
    }

    printf("Quantidade total de num: %d\n", quant);
    printf("A média dos num nao 4 e nao 6: %d\n", media/qMedia);

    return 0;
}