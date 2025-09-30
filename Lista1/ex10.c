#include <stdio.h>

int main() {
    int fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%d", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("A temperatura em Celsius é: %d\n", celsius);

    return 0;
}