#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int escolha;

    printf("------------------------------Menu----------------------------\n");
    printf("Escolha a dificuldade do jogo (Digite o número correspondente)\n");
    printf("1. Fácil\n");
    printf("2. Médio\n");
    printf("3. Difícil\n");
    printf("Dificuldade escolhida: ");
    scanf("%d", &escolha);
    printf("--------------------------------------------------------------\n");
    printf("Instruções:");
    printf("\n Tente acertar o mais rápido possível para ganhar mais pontos!");
    printf("\n Você começa com 100 pontos, cada erro são -10.");
    printf("\n Caso você não acerte,ao final, sua pontuação é zerada!\n");
    printf("--------------------------------------------------------------\n");

    if(escolha == 1) {
            int nAleatorio = (rand() % 10) + 1;
            int tentativa;
            printf("Você escolheu o fácil, você tem 5 tentativas para acertar o número entre 1 e 10\n");
            for(int i = 0; i < 5; i++) {
                int pontuacao = 0;
                pontuacao = 100 - (i * 10);
                printf("\nTentativa %d", i + 1);
                printf("\nSua resposta: ");
                scanf("%d", &tentativa);
                if(tentativa == nAleatorio) {
                    printf("\nVocê acertou !");
                    printf("\nSua pontuação foi: %d", pontuacao);
                    if(pontuacao >= 80) {
                        printf("\nExcelente! Você é muito bom nisso!");
                        return 0;
                    } else if(pontuacao >= 50) {
                        printf("\nBoa! Mas tente melhorar!");
                        return 0;
                    }
                    return 0;
                } else if(tentativa <= nAleatorio) {
                    printf("O número misterioso é maior!\n");
                } else {
                    printf("O número misterioso é menor!\n");
                }
            }
        printf("\nSuas chances acabaram, infelizmente você não conseguiu acertar, o número misterioso era: %d", nAleatorio);
    }
        else if(escolha == 2) {
            int nAleatorio = (rand() % 50) + 1;
            int tentativa;
            printf("Você escolheu o fácil, você tem 7 tentativas para acertar o número entre 1 e 50\n");
            for(int i = 0; i < 7; i++) {
                int pontuacao = 0;
                pontuacao = 100 - (i * 10);
                printf("\nTentativa %d", i + 1);
                printf("\nSua resposta: ");
                scanf("%d", &tentativa);
                 if(tentativa == nAleatorio) {
                    printf("\nVocê acertou !");
                    printf("\nSua pontuação foi: %d", pontuacao);
                    if(pontuacao >= 70) {
                        printf("\nExcelente! Você é muito bom nisso!");
                        return 0;
                    } else if(pontuacao >= 40) {
                        printf("\nBoa! Mas tente melhorar!");
                        return 0;
                    } else if(pontuacao > 0) {
                        printf("\nQuase que não consegue, mas acertou!");
                    }
                    return 0;
                } else if(tentativa <= nAleatorio) {
                    printf("O número misterioso é maior!\n");
                } else {
                    printf("O número misterioso é menor!\n");
                }
            }
            printf("\nSuas chances acabaram, infelizmente você não conseguiu acertar, o número misterioso era: %d", nAleatorio);
        }
        else if(escolha == 3) {
            int nAleatorio = (rand() % 100) + 1;
            int tentativa;
            printf("Você escolheu o fácil, você tem 10 tentativas para acertar o número entre 1 e 100\n");
            for(int i = 0; i < 10; i++) {
                int pontuacao = 0;
                pontuacao = 100 - (i * 10);
                printf("\nTentativa %d", i + 1);
                printf("\nSua resposta: ");
                scanf("%d", &tentativa);
                 if(tentativa == nAleatorio) {
                    printf("\nVocê acertou !");
                    printf("\nSua pontuação foi: %d", pontuacao);
                    if(pontuacao >= 70) {
                        printf("\nExcelente! Você é muito bom nisso!");
                        return 0;
                    } else if(pontuacao >= 40) {
                        printf("\nBoa! Mas tente melhorar!");
                        return 0;
                    } else if(pontuacao > 0) {
                        printf("\nQuase que não consegue, mas acertou!");
                    }
                    return 0;
                } else if(tentativa <= nAleatorio) {
                    printf("O número misterioso é maior!\n");
                } else {
                    printf("O número misterioso é menor!\n");
                }
            }
            printf("\nSuas chances acabaram, infelizmente você não conseguiu acertar, o número misterioso era: %d", nAleatorio);
        }
    return 0;
}