#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Entre com um valor para a e um para b:  \n");
    scanf("%d%d", &a, &b);

    int result;
    if(b!=0){ //legibilidade para o codigo   do que if(b)
        result = a / b;
    }else{
        printf("Nao pode dividir por zero \n");
        exit(1);
    }
    printf("Resultado: %d \n", result);
    return 0;
}
