#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que dados 10 números pelo usuário,
verifique quantos são pares.
*/
int main(){
    int cont = 0, num;
    //Repete 10 vezes
    for(int i=1; i<=10; i++){
        printf("Digite um número: \n");
        scanf("%d", &num);
        if (num % 2 == 0) {
            cont = cont+1;
        }
    }
    printf("Total de pares digitados: %d \n", cont);
    return 0;
}
