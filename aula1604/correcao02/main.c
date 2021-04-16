#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que leia X números onde (0<=N<20).
Ao final, apresente a somatória dos mesmos.
A condição de parada é a entrada de um valor 0.
*/
int main() {
    int soma = 0, x;
    do{
        do{
            printf("Digite um número: \n");
            scanf("%d", &x);
        }while(x<0 || x>19);
        //somou apenas os números no intervalo
        soma = soma + x;
    }while(x!=0);
    printf("A somatória é: %d \n", soma);
    return 0;
}
