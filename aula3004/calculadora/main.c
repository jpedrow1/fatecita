#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
    int opcao;
    int valor1, valor2;
    int resultado;
    do {
        //menu com as opções
        //no windows
        //system("cls");
        system("clear");
        printf("\t\tMenu do Programa\n");
        printf("\t\t----------------\n");
        printf("\t\t1..) Somar .....\n");
        printf("\t\t2..) Subtrair ..\n");
        printf("\t\t3..) Multiplicar\n");
        printf("\t\t4..) Dividir....\n");
        printf("\t\t5..) Resto .....\n");
        printf("\t\t9..) SAIR ......\n");
        printf("\t\tSua opção: ");
        scanf("%d", &opcao);
        if(opcao==9){
            printf("Fim do programa \n");
            break;
        }
        printf("Digite o primeiro valor: \n");
        scanf("%d", &valor1);
        printf("Digite o segundo valor: \n");
        scanf("%d", &valor2);
        switch(opcao){
            case 1:
                resultado = somar(valor1, valor2);
                printf("Resultado da soma: %d \n", resultado);
                getchar();getchar(); //system("pause");
                break;
            case 2:
                resultado = subtrair(valor1, valor2);
                printf("Resultado da subtração: %d \n", resultado);
                getchar();getchar();
                break;
            case 3:
                resultado = multiplicar(valor1, valor2);
                printf("Resultado da multiplicação: %d \n", resultado);
                getchar();getchar();
                break;
            case 4:
                resultado = dividir(valor1, valor2);
                printf("Resultado da divisão: %d \n", resultado);
                getchar();getchar();
                break;
            case 5:
                resultado = resto(valor1, valor2);
                printf("Resto da Divisão: %d \n", resultado);
                getchar();getchar();
                break;
            default:
                printf("Opção inválida \n");
        }
    }while(opcao!=9);
    return 0;
}
