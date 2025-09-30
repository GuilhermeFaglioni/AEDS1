#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
    srand(time(NULL));
    int num;
    int escolhaMaquina;
    int escolha;
    int resultado;
    int continuar = 1;

    do {
        escolhaMaquina = (rand() % 5) + 1;
        printf("\nBem vindo ao jogo do par ou ímpar!");
        printf("\nDigite 1 para escolher par e 2 para ímpar: ");
        scanf("%d", &escolha);
        printf("\nDigite o seu número de escolha: ");
        scanf("%d", &num);
    
        if(num + escolhaMaquina % 2 == 0) {
            resultado = 1;
        } else {
            resultado = 2;
        }

        if(resultado == escolha){
            printf("\nVocê ganhou!");
        } else {
            printf("\nA máquina ganhou!");
        }

        printf("\nDeseja continuar ? \nDigite 1 para sim e 0 para não: ");
        scanf("%d", &continuar);


    } while (continuar != 0);



    return 0;
}