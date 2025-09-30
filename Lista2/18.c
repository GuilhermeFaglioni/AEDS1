#include <stdio.h>

int main() {
    int n1, n2, n3;
    int media;

    printf("Digite a primeira nota: ");
    scanf("%d", &n1);
    printf("Digite a segunda nota: ");
    scanf("%d", &n2);
    printf("Digite a terceira nota: ");
    scanf("%d", &n3);

    media = (n1 + n2 + n3)/3;
    if(media < 5) {
        printf("Reprovado");
        return 0;
    } else if(media < 7) {
        printf("Para aprovação é preciso de %d", 14 - media);
        return 0;
    } else {
        printf("Aprovado");
        return 0;
    }

    return 0;
}