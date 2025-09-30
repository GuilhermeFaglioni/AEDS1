#include <stdio.h>

int main () {
    float preco;

    printf("Digite o preco: ");
    scanf("%f", &preco);

    if(preco > 100){
        preco *= 0.9;
        printf("Novo preco: %.2f", preco);
        return 0;
    }

    printf("Não tem desconto");
    return 0;
}