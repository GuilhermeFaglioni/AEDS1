#include <stdio.h>

int main () {
    printf("Esses são os números pares de 0 a 50: \n");
    for(int i = 0; i <= 50; i++) {
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
    }
    printf("Esses são os números impares de 0 a 50: \n");
    for(int i = 0; i <= 50; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}