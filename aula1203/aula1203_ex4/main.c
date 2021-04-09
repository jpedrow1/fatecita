#include <stdio.h>
#include <stdlib.h>
/*
Aumento de salario, para mulheres 10%, para homens
08%.
*/
int main()
{
    double salario;
    char sexo;
    printf("Digite o valor do salario atual \n");
    scanf("%lf", &salario);
    fflush(stdin); //limpar o buffer
    printf("Digite o sexo: 'f' para feminino ou 'm' para masculino \n");
    sexo = getchar();
    salario *= sexo == 'f' ? 1.10 : 1.08;
    printf("O novo salario eh %.2f  \n", salario);
    return 0;
}
