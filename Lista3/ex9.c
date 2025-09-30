#include <stdio.h>

int main() {
    int num;

    int t1 = 0;
    int t2 = 1;
    int t3;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num >= 1) {
        printf("%d ", t1);
    }

    if(num >= 2) {
        printf("%d ", t2);
    }

    for(int i = 3; i <= num; i++){
        t3 = t1 + t2;
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
    }

    return 0;
}