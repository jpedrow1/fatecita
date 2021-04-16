#include <stdio.h>
#include <stdlib.h>
/*
Escreva um algoritmo para gerar uma PA de
razão qualquer, com uma série
de 10 termos iniciando em 1.
*/
int main() {
    int razao, pa;
    printf("Digite a razao da PA \n");
    scanf("%d", &razao);
    pa = 1;
    printf("1º -> %d \n", pa);
    for(int termo=2; termo<=10; termo++){
        pa = pa + razao;
        printf("%dº -> %d \n", termo, pa);
    }
    printf("\n\nAcabou\n");
    return 0;
}
