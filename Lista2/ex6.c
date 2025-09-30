#include <stdio.h>

int main()
{
    int ano;

    printf("Digite o ano e descubra se é bissexto:");
    scanf("%d", &ano);

    if (ano % 4 == 0) {
        if (ano % 100 == 0 && ano % 400 == 0){
            printf("\n%d é bissexto", ano);
        }
        printf("\n%d é bissexto", ano);
    }
    else {
        printf("\n%d não é bissexto", ano);
    }

    return 0;
}