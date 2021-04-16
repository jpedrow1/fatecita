#include <stdio.h>
#include <stdlib.h>

int main(){

    int soma = 0;
    int num;

    do{
        printf("Digite um numero: \n");
        scanf("%d", &num);
        soma += num; // ao inves disto:   soma = soma + num;
    }while(num!=0);
    printf("Soma: %d \n", soma);
    return 0;
}
