#include <stdio.h>

int main () {
    int horas, minutos, segundos;
    int totalSegundos;

    printf("Digite o tempo em horas: ");
    scanf("%d", &horas);
    printf("Digite o tempo em minutos: ");
    scanf("%d", &minutos);
    printf("Digite o tempo em segundos: ");
    scanf("%d", &segundos);

    totalSegundos = (horas * 3600) + (minutos * 60) + segundos;

    printf("O tempo total em segundos é: %d\n", totalSegundos);

    return 0;
}