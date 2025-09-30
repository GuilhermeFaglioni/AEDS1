#include <stdio.h>

int soma(int n1, int n2){
    return n1 + n2;
}

int mult(int n1, int n2){
    return n1 * n2;
}

int sub(int n1, int n2){
    return n1 - n2;
}

int div(int n1, int n2){
    return n1 / n2;
}
 
int main() {
    int escolha = 5;
    do {
        int n1, n2;
        printf("\nMenu:\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("0. Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);
        switch (escolha){
        case 1:
            printf("Você escolheu soma, digite os números que deseja somar:\n");
            printf("Primeiro valor: ");
            scanf("%d", &n1);
            printf("Segundo valor: ");
            scanf("%d", &n2);
            printf("Resultado: %d\n", soma(n1, n2));
            break;
        case 2:
            printf("Você escolheu subtração, digite os números que deseja subtrair:\n");
            printf("Primeiro valor: ");
            scanf("%d", &n1);
            printf("Segundo valor: ");
            scanf("%d", &n2);
            printf("Resultado: %d\n", sub(n1, n2));
            break;
        case 3:
            printf("Você escolheu multiplicação, digite os números que deseja multiplicar:\n");
            printf("Primeiro valor: ");
            scanf("%d", &n1);
            printf("Segundo valor: ");
            scanf("%d", &n2);
            printf("Resultado: %d\n", mult(n1, n2));
            break;
        case 4:
            printf("Você escolheu divisão, digite os números que deseja dividir:\n");
            printf("Primeiro valor: ");
            scanf("%d", &n1);
            printf("Segundo valor: ");
            scanf("%d", &n2);
            printf("Resultado: %d\n", div(n1, n2));
            break;
        
        default:
            break;
        }
    } while(escolha != 0);

    return 0;
}