#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas = 0;
    int soma = 0;
    while(soma < 200){
        printf("Quantos ingressos quer comprar: \n");
        scanf("%d", &pessoas);
        soma = soma + pessoas;
    }
    printf("Quantas pessoas vão no evento: %d \n", soma);
    return 0;
}
