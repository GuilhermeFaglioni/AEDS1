#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        printf("É vogal");
    } else {
        printf("É consoante");
    }
}