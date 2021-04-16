#include <stdio.h>
#include <stdlib.h>
/*
Construa um programa que leia X valores inteiros e:
– Encontre o maior valor,
– o menor valor e calcule
– a média dos números lidos
- A condição de parada é a entrada do número que não
  deve ser considerado nos calculos.
*/
int main() {
    int num, maior, menor, soma=0, cont=0;
    float media;
    do{
        cont++;
        printf("Digite um valor: \n");
        scanf("%d", &num);
        if(num == 0) {
            break;
        }
        if(cont == 1){
            maior = num;
            menor = num;
        }else{
            if (num > maior) maior = num;
            if (num < menor) menor = num;
        }
        soma = soma + num;
    }while(num!=0);
    cont--;
    media = soma / (float)cont;
    printf("Maior valor: %d \n", maior);
    printf("Menor valor: %d \n", menor);
    printf("Media dos valores: %.2f \n", media);
    return 0;
}
