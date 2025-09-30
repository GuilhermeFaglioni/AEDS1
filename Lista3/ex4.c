#include <stdio.h>

int main() {
    int num;
    int i = 1;
    printf("Digite um número: ");
    scanf("%d", &num);

    while(i <= 10) {
        printf("%d \n", i*num);
        i++;
    }

    return 0;
}