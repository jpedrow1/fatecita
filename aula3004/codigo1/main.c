#include <stdio.h>
#include <stdlib.h>

void imprimirNx(int n);

int main() {
    //programa de entrada
    imprimirNx(3);
    imprimirNx(5);
    imprimirNx(7);
    imprimirNx(9);
    imprimirNx(7);
    imprimirNx(5);
    imprimirNx(3);
    return 0;
}

void imprimirNx(int n){
    for(int i=1; i<=n; i++){
        printf("*");
    }
    printf("\n");
}
