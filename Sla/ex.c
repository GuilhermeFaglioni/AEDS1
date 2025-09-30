#include <stdio.h>  
    int main(){
        int numero;
        printf("digite um numero ");
        scanf("%d", &numero);
        if(numero%2==0){
            printf("esse numero e par");
        }
        else{
            printf("esse numero e impar");
        }
        return 0;
    }