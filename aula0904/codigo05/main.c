#include <stdio.h>
#include <stdlib.h>
/*
Supondo que a população de um país A seja da ordem de 80000
habitantes com uma taxa anual de crescimento de 3% e que a
população de B seja 200000 habitantes com uma taxa de
crescimento de 1.5%.
Faça um programa que calcule e escreva o número de
anos necessários para que a população do país A ultrapasse
ou iguale a população do país B, mantidas as taxas de crescimento.
*/
int main()
{
    int pop_a = 80000;
    float per_cresc_a = 0.03;
    int pop_b = 200000;
    float per_cresc_b = 0.015;
    int totanos = 0;
    while(pop_a < pop_b){
        pop_a = pop_a + (pop_a * per_cresc_a);
        pop_b = pop_b + (pop_b * per_cresc_b);
        totanos++;
        printf("No ano: %d \n", totanos);
        printf("Populacao de País a:  %d \n", pop_a);
        printf("Populacao de País b:  %d \n", pop_b);
        printf("==============================\n\n");
    }
    printf("==============================\n\n");
    printf("Total de anos: %d \n", totanos);
    printf("Populacao ao final do periodo: \n");
    printf("Populacao de País a:  %d \n", pop_a);
    printf("Populacao de País b:  %d \n", pop_b);
    return 0;
}
