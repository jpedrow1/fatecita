#include <stdio.h>
#include <stdlib.h>
/* apresenta um menu com opções para o usuario */
int main()
{
    int opcao;
    printf("Menu Principal \n");
    printf("1.. Coca Cola \n");
    printf("2.. Fanta \n");
    printf("3.. Sprite \n");
    printf("4.. Guarana \n");
    printf("5.. Soda Mogi \n");
    printf("Sua opcao: ");
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
        printf("Voce escolheu Coca-cola vai pagar R$ 5,00 \n");
        break;
    case 2:
        printf("Voce escolheu Fanta vai pagar R$ 4,00 \n");
        break;
    case 3:
        printf("Voce escolheu Sprite vai pagar R$ 5,00 \n");
        break;
    case 4:
        printf("Voce escolheu Guarana vai pagar R$ 3,00 \n");
        break;
    case 5:
        printf("Voce escolheu Soda Mogi vai pagar R$ 1,00 \n");
        break;
    default:
        printf("Opcao invalida \n");
    }
    return 0;
}
