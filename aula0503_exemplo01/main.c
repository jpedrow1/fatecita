#include <stdio.h>
#include <stdlib.h>
/*
Antes da Estruturas de decisao.
Praticarmos entradas com tipos diferentes
entre char char[] e numericos

*/
int main()
{
    char sexo;
    int dias;
    char nome[51];
    printf("Digite m ou f para masculino ou feminino \n");
    scanf("%c", &sexo);
    fflush(stdin);
    printf("Digite o seu nome: \n");
    scanf("%s", nome);
    printf("Digite a quantidade de dias que trabalhou \n");
    scanf("%d", &dias);

    printf("Seu nome eh : %s  \n", nome);
    printf("O sexo digitado foi: %c \n", sexo);
    return 0;
}
