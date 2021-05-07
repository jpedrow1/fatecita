#include <stdio.h>
#include <stdlib.h>
// Programa que dadas N notas de alunos
// Deve encontrar a maior nota e a frequencia de vezes
// que ocorreu esta maior nota e média da sala
// -- Pesquisa: como alocar dados dinamicamente em c [ malloc(sizeof(int) ]
int main(){
    int total;

    printf("Por favor, Quantos tem nesta sala? \n");
    scanf("%d", &total);

    float nota[total];

    float media;
    float soma = 0.0;
    float maiorNota;
    int quantidade = 0;

    //1. Pedir para o usuário entrar com 15 notas
    for(int i=0; i<total; i++){
        printf("Digite a nota %d: \n", i+1);
        scanf("%f", &nota[i]);
        soma = soma + nota[i];
    }

    //2. Definir qual é a maior nota
    maiorNota = nota[0];
    for(int i = 1; i < total; i++){
        if (maiorNota < nota[i]) maiorNota = nota[i];
    }

    //3. Qual é a frequência de vezes que ocorreu a maior nota
    for(int i = 0; i < total; i++){
        if (maiorNota == nota[i]) quantidade++;
    }
    media = soma / total;
    printf("A maior nota da sala é: %.2f \n", maiorNota);
    printf("O total de alunos que tiraram a maior nota é: %d \n", quantidade);
    printf("A média da sala é: %.2f \n", media);
    return 0;
}
