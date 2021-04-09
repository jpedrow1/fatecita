#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Gerar 06 numeros aleatorio para o jogo da
megasena - função rand() - gera um pseudorandomico
*/
//Com o elemento vetor, resolveriamos o numero gerado igual
int main()
{
    srand(time(NULL));
    int gerado;
    for(int i = 1; i <= 6; i++){
        gerado = (int)(rand() % 60) + 1;
        printf("%dº gerado = %d \n", i, gerado);
    }
    return 0;
}
