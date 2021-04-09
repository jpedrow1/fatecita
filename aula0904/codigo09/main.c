#include <stdio.h>
#include <stdlib.h>
/*
A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,...
Faça um programa capaz de gerar a série até o n−ésimo termo.
*/
int main()
{
    int n;
    printf("Quantos termos da sequencia de Fibonacci você quer ? \n");
    scanf("%d", &n);
    int atual = 0;
    int pen = 1;
    printf("1º elem = %d \n", pen);
    int ult = 1;
    printf("2º elem = %d \n", ult);
    for(int i = 3; i <= n; i++){
        atual = pen + ult;
        printf("%dº elem = %d \n",i, atual);
        pen = ult;
        ult = atual;
    }
    return 0;
}
