#include <stdio.h>

int main() {
    int num;
    int bin = 0;
    printf("Digite um número até 15: ");
    scanf("%d", &num);

    while(num > 0) {
        if(num - 8 >= 0) {
            bin += 1000;
            num -= 8;
        } else if(num - 4 >= 0) {
            bin += 100;
            num -= 4;
        } else if(num - 2 >= 0) {
            bin += 10;
            num -= 2;
        } else if(num - 1 >= 0) {
            bin += 1;
            num -= 1;
        }
    }

    printf("%d em binário é %d", num, bin);

    return 0;
}