#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Acertar o numero da sorte.
Computador vai gerar um numero
*/
int main()
{
    srand(time(NULL)); //garantia de numeros aleatorios
    int magico = rand() % 100; //gerar nums entre 0 e 99
    int palpite;
    int cont = 0; //contar as vezes que eu errei
    do{
        printf("Digite o palpite: \n");
        scanf("%d", &palpite);
        cont++;
        if(palpite==magico){
            break;
        }
        printf("Opa, voce errou!!! \n");
        if(palpite < magico){
           printf("Seu numero foi baixo \n");
        }else{
            printf("seu numero foi alto \n");
        }
    }while(palpite != magico);
    printf("Parabens voce acertou em %d tentativas \n", cont);
    printf("Numero da sorte: %d \n", magico);
    return 0;
}
