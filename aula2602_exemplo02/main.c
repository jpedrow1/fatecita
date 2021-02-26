#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    a = 12;
    b = 5;
    int resultado;
    float resultadoDivisao;

    resultado = a + b;
    printf("Resultado:  %d   \n", resultado);

    resultado = a - b;
    printf("Resultado:  %d   \n", resultado);

    resultado = a * b;
    printf("Resultado:  %d   \n", resultado);

    resultadoDivisao = (float)a / b; //Casting (promover o tipo)
    printf("Resultado:  %f   \n", resultadoDivisao);

    return 0;
}
