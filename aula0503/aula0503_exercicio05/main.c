#include <stdio.h>
#include <stdlib.h>
/*
Um aluno fez tr�s avalia��es de uma determinada
disciplina. Sabe-se que pelo planejamento do
professor a media � ponderada, sendo que a prova 1
tem peso 2, a prova 2 tem peso 2 e a prova 3 tem
peso maior, ou seja peso: 4.
Fa�a um programa que dado com entrada a
nota das tr�s avalia��es, mostre a final,
o nome e a media do aluno.
*/
int main()
{
    float nota1, nota2, nota3, media;
    printf("Digite a nota 1 do aluno \n");
    scanf("%f", &nota1);
    printf("Digite a nota 2 do aluno \n");
    scanf("%f", &nota2);
    printf("Digite a nota 3 do aluno \n");
    scanf("%f", &nota3);
    media = (nota1 * 2 + nota2 * 2 + nota3 * 4) / 8;
    printf("A media do aluno:  %f \n", media);
    return 0;
}
