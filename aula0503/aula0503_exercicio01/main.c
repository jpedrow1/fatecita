#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
Calcular o �ndice de massa corp�rea de uma pessoa.
Que o usu�rio entre com o valor do peso da pessoa e da altura (1.67).
[A formula do calculo do imc = peso / (altura * altura)
*/
int main()
{
    setlocale(LC_ALL, "Portuguese");
    double peso, altura, imc;
    printf("Digite o peso da pessoa:  \n");
    scanf("%lf", &peso);
    printf("Digite a altura da pessoa:  \n");
    scanf("%lf", &altura);
    imc = peso / (altura * altura);
    printf("O seu imc �: %lf \n", imc);
    return 0;
}
