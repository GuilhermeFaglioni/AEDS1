#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Simule uma versão simplificada do jogo de dados Craps. O jogador lança dois dados. 
Se a soma for 7 ou 11 na primeira jogada, ele ganha. Se for 2, 3 ou 12, ele perde. 
Se for qualquer outro valor (4, 5, 6, 8, 9, 10), este valor se torna o "ponto". 
O jogador deve continuar jogando os dados até tirar o "ponto" novamente (e ganhar) ou tirar um 7 (e perder).
*/

int craps(int d1, int d2, int ponto) {
    printf("\nVocê jogou %d e %d\n", d1, d2);
    if(d1 + d2 == ponto) {
        printf("Você ganhou! bateu o ponto %d\n", ponto);
        return 1;
    } else if(d1 + d2 == 7) {
        printf("Você perdeu!");
        return 2;
    } else {
        printf("Jogue novamente\n");
        return 3;
    }
}

int main() {
    srand(time(NULL));
    int d1, d2;
    int escolha = 1;
    int ponto;
    int cont;

    printf("O jogo vai começar, aperte 1 para jogar os dados: ");
    scanf("%d", &cont);
    
    if(escolha == 1) {
        d1 = (rand() % 6) + 1;
        d2 = (rand() % 6) + 1;

        printf("Você jogou %d e %d\n", d1, d2);
        printf("Seu ponto para ganhar agora é %d\n", d1 + d2);
        if(d1 + d2 == 7 || d1 + d2 == 11) {
            printf("Você ganhou!\n");
            return 0;
        } else if(d1 + d2 == 2 || d1 + d2 == 3 || d1 + d2 == 12) {
            printf("Você perdeu!\n");
            return 0;
        } else {
            printf("Jogue novamente!\n");
            ponto = d1 + d2;
            escolha = 3;
            do {
                d1 = (rand() % 6) + 1;
                d2 = (rand() % 6) + 1;
                escolha = craps(d1, d2, ponto);
                printf("\n");
            } while(escolha == 3); 
        }
    }
    return 0;
}