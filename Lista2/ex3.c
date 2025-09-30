#include <stdio.h>

int main () {
    int num1, num2, num3;
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);

    if(num1 < num2 && num1 < num3) {
        printf("%d\n",num1);
        if(num2 < num3) {
            printf("%d\n", num2);
            printf("%d\n",num3);
        } else {
            printf("%d\n",num3);
            printf("%d\n",num2);
        }
    } else if (num2 < num1 && num2 < num3) {
        printf("%d\n",num2);
        if(num1 < num3) {
            printf("%d\n",num1);
            printf("%d\n",num3);
        } else {
            printf("%d\n",num3);
            printf("%d\n",num1);
        };
    } else {
        printf("%d\n",num3);
        if(num1 < num2) {
            printf("%d\n",num1);
            printf("%d\n",num2);
        } else {
            printf("%d\n",num2);
            printf("%d\n",num1);
        }
    }

    return 0;
}