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
    switch(sexo){
    case 'f':
    case 'F':
        salario *= 1.10;
        break;
    case 'm':
    case 'M':
        salario *= 1.08;
        break;
    default:
        printf("Camarada, esse sexo nao existe \n");
        exit(1); //acaba o programa com um erro.
    }
    printf("O novo salario eh %.2f  \n", salario);
    return 0;
}
