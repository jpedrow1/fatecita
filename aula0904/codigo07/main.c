#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que peça para n pessoas a sua idade,
ao final o programa devera verificar se a média de idade
da turma varia entre 0 e 25,26 e 60 e maior que 60;
e então, dizer se a turma é jovem, adulta ou idosa,
conforme a média calculada.
*/
int main()
{
    int idade=0; //idade da pessoa
    float media=0.0; //media calculada
    int soma=0; //soma das idades
    int cont=0; //contador de pessoas
    int resp=0; //reposta
    while(resp!=2){
        cont++;
        printf("Entre com a idade da pessoa %d \n", cont);
        scanf("%d", &idade);
        soma = soma + idade; // soma+= idade;
        printf("Digite [2] para encerrar, ou outro valor para continuar \n");
        scanf("%d", &resp);
    }
    media = soma / (float)cont;
    printf("Media de idade da sala: %.2f \n", media);
    if(media <= 25){
        printf("Turma jovem \n");
    }else{
        if(media <= 60) {
            printf("Turma adulta \n");
        }else{
            printf("Turma idosa \n");
        }
    }
    return 0;
}
