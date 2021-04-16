#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 7, b = 2, c = 1, d;

    d = a++ + b++ + c++;

    printf("Valor de (d) -->   %d  \n", d);
    printf("a -> %d, v -> %d, c -> %d \n", a, b, c);
    return 0;
}
