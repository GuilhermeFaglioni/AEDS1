#include <stdio.h>

void crescente(int n1, int n2, int n3) {
    if(n1 <= n2 && n2 <= n3) {
        printf("%d\n", n1);
        printf("%d\n", n2);
        printf("%d\n", n3);
    } else if (n1 <= n3 && n3 <= n2) {
        printf("%d\n", n1);
        printf("%d\n", n3);
        printf("%d\n", n2);
    } else if (n2 <= n1 && n1 <= n3) {
        printf("%d\n", n2);
        printf("%d\n", n1);
        printf("%d\n", n3);
    } else if (n2 <= n3 && n3 <= n1) {
        printf("%d\n", n2);
        printf("%d\n", n3);
        printf("%d\n", n1);
    } else if(n3 <= n1 && n3 <= n2) {
        printf("%d\n", n3);
        printf("%d\n", n1);
        printf("%d\n", n2);
    } else if (n3 <= n2 && n2 <= n1) {
        printf("%d\n", n3);
        printf("%d\n", n2);
        printf("%d\n", n1);
    }
 }

int main () {
    int n1, n2, n3;
    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite um valor: ");
    scanf("%d", &n2);
    printf("Digite um valor: ");
    scanf("%d", &n3);

    crescente(n1, n2, n3);

    return 0;
}