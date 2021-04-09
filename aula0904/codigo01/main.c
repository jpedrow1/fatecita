#include <stdio.h>
#include <stdlib.h>
/*
Primeiro estilo: com contador
Tabuada do numero informado pelo usuario
*/
int main()
{
    int num, resultado;
    printf("Deseja saber a tabuada de que número: \n");
    scanf("%d", &num);
    //Sabe o número de vezes que vai repetir.
    //Você usa o comando for
    for(int i = 1; i <= 10; i++){
        resultado = num * i;
        printf("%d  x   %d   =   %d \n", num, i, resultado);
    }
    return 0;
}
