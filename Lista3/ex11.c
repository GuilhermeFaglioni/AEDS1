#include <stdio.h>

int main() {
    float num;
    int i = 0;
    printf("Digite um número: ");
    scanf("%f", &num);
    while(num > 1){
        num /= 10;
        i++;
    }

    printf("%d", i);

    return 0;
}