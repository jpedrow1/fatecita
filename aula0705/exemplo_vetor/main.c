#include <stdio.h>
#include <stdlib.h>

int main(){
    //Vetor que armazena 10 valores inteiros
    int valor[10];
    //Alimentar o vetor (preencher o vetor com dados)
    for(int i=0; i<10; i++){
        printf("Digite o %dº valor: \n", i+1);
        scanf("%d", &valor[i]);
    }

    //Apresentando os valores digitados
    for(int i=0; i<10; i++){
        printf("Valor na posição [%d] =====> %d\n",i, valor[i]);
    }
    return 0;
}
