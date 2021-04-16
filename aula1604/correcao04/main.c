#include <stdio.h>
#include <stdlib.h>
/*
Escreva um programa que gere uma tabela com a conversão de graus para
Fahrenheit para Celsius , com valores variando de 1 em 1 grau, de 0 a
100 graus Celsius. [°C = (°F − 32) / 1,8]
*/
int main(){
    float c;
    printf("Tabela de conversao Farh para Celsius \n");
    printf("------------------------------------- \n");
    for(int f = 0; f <=100; f++){
        c = (f - 32) / 1.8;
        printf("Farhº %3d ==> Celsius %3.3fº \n", f, c);
    }
    return 0;
}
