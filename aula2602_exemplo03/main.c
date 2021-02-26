#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int numero = rand() % 100; //gera um valor entre zero e 99

    if (numero % 2 == 0){
        printf("Valor par \n");
    }else{
        printf("Valor impar \n");
    }
    printf("Valor de numero agora: %d \n", numero);


    return 0;
}
