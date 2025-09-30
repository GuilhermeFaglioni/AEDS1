#include <stdio.h>

int main() {
    int num;

    printf("Digite um número de 1 a 7: ");
    scanf("%d", &num);

    if(num < 1 || num > 7) {
        return 0;
    }

    switch (num)
    {
    case 1:
        printf("Segunda");
        break;
    case 2:    
        printf("Terca");
        break;
    case 3:
        printf("Quarta");
        break;
    case 4:
        printf("Quinta");
        break;
    case 5: 
        printf("Sexta");
        break;
    case 6: 
        printf("Sabado");
        break;
    case 7: 
        printf("Domingo");
        break;
    default:
        break;
    }

    return 0;
}