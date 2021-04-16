#include <stdio.h>
#include <stdlib.h>

/*
   Somar os valores entrados pelo usuário,com exceção
   dos números cuja divisão por 7 seja igual 0
   mult 7. Condição de parada é a entrada do numero zero
*/
int main() {
    int somar = 0;
    int n;
    do{
        printf("Digite um número: \n");
        scanf("%d", &n);
        if (n % 7 == 0) continue;
        somar+= n;
    }while(n !=0);
    printf("Somar: %d  \n", somar);
}
