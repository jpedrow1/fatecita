#include <stdio.h>
#include <stdlib.h>
/*
Construa um programa que leia 5 valores inteiros e:
– Encontre o maior valor,
– o menor valor e calcule
– a média dos números lidos
*/
int main() {
    int num, maior, menor, soma=0;
    float media;
    for(int i = 1; i <= 5; i++){
        printf("Digite um valor: \n");
        scanf("%d", &num);
        if(i == 1){
            maior = num;
            menor = num;
        }else{
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
        soma = soma + num;
    }
    media = soma / 5.0;
    printf("Maior valor: %d \n", maior);
    printf("Menor valor: %d \n", menor);
    printf("Media dos valores: %.2f \n", media);
    return 0;
}
