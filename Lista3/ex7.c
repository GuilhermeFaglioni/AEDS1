#include <stdio.h>

int main () {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("Não é primo");
        return 0;
    }

    for(int i = 0; i <= num; i++) {
        if(num % i == 0 && i != num && i != 1) {
            printf("Não é primo");
            return 0;
        }
    }

    printf("%d é primo", num);

    return 0;
}