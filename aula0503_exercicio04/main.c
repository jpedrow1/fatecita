#include <stdio.h>
#include <stdlib.h>
/*
Uma conta corrente possui um saldo positivo informado
pelo usuário, efetue um programa que peca para o
usuario o valor do saque e mostre o resultado do saldo ao final.
*/
int main()
{
    double saldo, saque;
    printf("Informe o saldo inicial: \n");
    scanf("%lf", &saldo);
    printf("Informe o valor do saque: \n");
    scanf("%lf", &saque);
    saldo = saldo - saque;
    printf("Saldo atual: %lf \n", saldo);
    return 0;
}
