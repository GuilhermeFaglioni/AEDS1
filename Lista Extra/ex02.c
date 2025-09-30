#include <stdio.h>

double leibniz(int num){
    double soma = 0.0;
    for (int i = 0; i < num; i++) {
        if (i % 2 == 0) {
            soma += 1.0 / (2 * i + 1);
        }
        else {
            soma -= 1.0 / (2 * i + 1);
        }
    }
    return soma;
}

int main() {
    int num;
    double pi = 0;
    printf("Digite um valor: ");
    scanf("%d", &num);
    pi = 4 * leibniz(num);
    printf("%.10d", pi);

    return 0;
}