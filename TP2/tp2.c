#include <stdio.h>

/*
1. Ranking Recursivo
2. Registrar Pontuação
3. Estatísticas de Partidas
4. Simulação de Decisão Tática
5. Manipulação de Dados com Ponteiros
6. Registrar Jogadores em Arquivo
7. Migrar Sistema para Struct
8. Sair
*/

int pontuacaoRecursiva(int fasesCompletas) {
    if(fasesCompletas == 0) {
        return 100;
    } else if(fasesCompletas % 3 == 0) {
        return 150 + pontuacaoRecursiva(fasesCompletas - 1);
    } else {
        return 100 + pontuacaoRecursiva(fasesCompletas - 1);
    }
}

void exibePontuação(int vet[10][2]) {
    for(int i = 0; i < 10; i++) {
        printf("\nJogador %d: %d\n", i + 1, vet[i][0]);
        printf("Modo de jogo: %d\n", vet[i][1]);
    }
}

void exibeStats(int vet[3][10]) {
    for(int i = 0; i < 3; i++) {
        int soma = 0;
        int contador = 0;
        printf("\n\nModo: %d\n", i);
        for(int j = 0; j < 10; j++) {
            soma += vet[i][j];
            if(vet[i][j] != 0) {
                contador++;
            }
        }
        printf("Média: %d\n", soma/contador);
    }
}

void menu() {
    int escolha = 0;
    int fasesCompletas;
    int pontuacao;
    int pontuacaoVet[10][2];
    int qtdRegistrada = 0;
    int stats[3][10];

    do {
        printf("\n===== SISTEMA DE JOGOS ONLINE =====\n");
        printf("1. Ranking Recursivo\n");
        printf("2. Registrar Pontuação\n");
        printf("3. Estatísticas de Partidas\n");
        printf("4. Simulação de Decisão Tática\n");
        printf("5. Manipulação de Dados com Ponteiro\n");
        printf("6. Registrar Jogadores em Arquivo\n");
        printf("7. Migrar Sistema para Struct\n");
        printf("8. Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Quantas fases você completou: ");
                scanf("%d", &fasesCompletas);
                pontuacao = pontuacaoRecursiva(fasesCompletas);
                printf("\n");
                printf("Sua pontuação: %d\n", pontuacao);
                if(pontuacao <= 300) {
                    printf("Você está só começando!");
                } else if(pontuacao <= 600) {
                    printf("Bom desempenho!");
                } else {
                    printf("Incrível, você dominou as fases!");
                }
                printf("\n");
                break;
            case 2:
                for(int i = 0; i < 10; i++) {
                    int fases;
                    printf("\nDigite quantas fases o jogador %d concluiu: ", i + 1);
                    scanf("%d", &fases);
                    pontuacaoVet[i][0] = pontuacaoRecursiva(fases);
                    printf("\nAgora para os modos de jogo: \n0. Casual\n1. Competitvo\n2. Hardcore\n");
                    printf("Digite o modo de jogo:");
                    scanf("%d", &pontuacaoVet[i][1]);
                }
                printf("\nPontuações\n");
                exibePontuação(pontuacaoVet);
                break;
            case 3:
                    for(int i = 0; i < 3; i++) {
                        for(int j = 0; j < 10; j++) {
                        stats[i][j] = 0;
                            }
                    }
                    for(int i = 0; i < 3; i++) {
                        int contador = 0;
                        for(int j = 0; j < 10; j++) {
                            if(pontuacaoVet[j][1] == i) {
                                stats[i][contador] = pontuacaoVet[j][0];
                                contador++;
                            }
                        }
                    }
                    printf("\n");
                    exibeStats(stats);
                    printf("\n");
                break;
            default:
                break;
        }
    }while(escolha != 8);
}

int main() {
    menu();

    return 0;
}

