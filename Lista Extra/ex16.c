#include <stdio.h>

/*
Dois retângulos em um plano cartesiano são definidos por seus cantos inferior-esquerdo e superior-direito (x1, y1) e (x2, y2). 
Crie um programa que leia as coordenadas dos dois cantos de dois retângulos e calcule a área da intersecção entre eles. 
Se não houver intersecção, a área é zero.
*/

int main() {
    int x1, x2, y1, y2;
    int altura;
    int largura;
    int area;

    printf("Dê o primeiro ponto (canto inferior esquerdo) de um retângulo em um plano cartesiano: \n");
    printf("x: "); scanf("%d", &x1);
    printf("y: "); scanf("%d", &y1);
    printf("Dê o segundo ponto (canto superior direito) de um retângulo em um plano cartesiano: \n");
    printf("x: "); scanf("%d", &x2);
    printf("y: "); scanf("%d", &y2);

    altura = y2 - y1;
    largura = x2 - x1;

    if(altura > 0 && largura > 0) {
        area = largura*altura;
    } else {
        area = 0;
    }

    printf("A área é %d", area);

    return 0;

}