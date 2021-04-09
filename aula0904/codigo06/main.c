#include <stdio.h>
#include <stdlib.h>
/*
Faça um programa que imprima na tela apenas os números
ímpares entre 1 e 50.
*/
int main()
{
    for(int i = 1; i<=50; i = i + 2){
        printf("%d \n", i);
    }
    return 0;
}
