#include <stdio.h>
#include <stdlib.h>
/*
Dado um valor em D�lares e a cota��o da moeda americana,
mostrar o valor em Reais.
Dado um valor em Reais e a cota��o da moeda americana,
mostrar o valor em D�lares.
*/
int main()
{
    double dolar, cotacao, reais;
    printf("Digite o valor em dolares: \n");
    scanf("%lf", &dolar);
    printf("Digite a cotacao da moeda hoje: \n");
    scanf("%lf", &cotacao);
    reais = dolar * cotacao;
    printf("Valor em Reais: %lf \n", reais);
    printf("Operacao contraria \n");
    printf("Entre com um valor Reais \n");
    scanf("%lf", &reais);
    dolar = reais / cotacao;
    printf("Valor em dolares: %lf \n", dolar);
    return 0;
}
