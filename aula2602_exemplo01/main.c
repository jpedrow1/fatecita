#include <stdio.h>
#include <stdlib.h>
int x = 30; //escopo global
int main() //porta de entrada do teu programa
{
    //programa para somar dois numeros
    int valor1 = 10, valor2 = 11;
    int x = 88;


    printf("Valor de valor1: %d \n", valor1);
    printf("Valor de valor2: %d \n", valor2);
    printf("Valor de x: %d \n", x);
    mostravalorx();

    return 0;
}
void mostravalorx()
{
    printf("%d \n", x);
}

