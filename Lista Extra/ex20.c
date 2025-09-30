#include <stdio.h>
#include <math.h>

float distPontos(int x1, int x2, int y1, int y2) {
    int dX = pow((x2 - x1), 2);
    int dY = pow((y2 - y1), 2);
    float resultado = sqrt(dX + dY);

    return resultado;
}

int main() {
    int x1, x2, y1, y2;

    printf("Digite x1: ");
    scanf("%d", &x1);
    printf("Digite y1: ");
    scanf("%d", &y1);
    printf("Digite x2: ");
    scanf("%d", &x2);
    printf("Digite y2: ");
    scanf("%d", &y2);

    printf("A distância de (%d, %d) e (%d, %d) é %.2f", x1, y1, x2, y2, distPontos(x1, x2, y1, y2));

    return 0;

}