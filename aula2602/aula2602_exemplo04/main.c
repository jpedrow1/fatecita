#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

//constantes use sempre para nunca ter problema o define
int main()
{
    //programa para calcular a area de um circulo
    //A = π·r²
    float raio;
    printf("Digite o valor do raio da circunferencia \n");
    scanf("%f", &raio);
    float area = PI * (raio * raio);
    printf("Area da circunferencia: %f \n", area);
    return 0;
}
