#include <stdio.h>

int main()
{
    int l1, l2, l3;

    printf("Digite o primeiro lado do triângulo: ");
    scanf("%d", &l1);
    printf("Digite o segundo lado do triângulo:");
    scanf("%d", &l2);
    printf("Digite o terceiro lado do triângulo:");
    scanf("%d", &l3);

    if (l1 == l2 && l2 == l3){
        printf("É um triângulo equilátero");
        return 0;
    }
    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1){
        if (l1 != l2 && l2 != l3){
            printf("É escaleno");
            return 0;
        }
        else if (l1 == l2 || l1 == l3 || l2 == l3){
            printf("É isóceles");
            return 0;
        }
        return 0;
    }
    else{
        printf("Triângulo inválido!");
        return 0;
    }
    return 0;
}