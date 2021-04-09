#include <stdio.h>
#include <stdlib.h>
/*
    Cardapio
    1 - File ao molho madeira
    2 - File Moraes
    3 - Picanha na grelha
    4 - Frango a passarinho
    Sua opcao:
*/
int main()
{
    int opcao;
    //validacao de entrada (1 ate 4)
    do{
        //system("cls");
        printf("Cardapio \n");
        printf("---------------\n");
        printf("1.. File ao molho madeira \n");
        printf("2.. File Moraes \n");
        printf("3.. Picanha na grelha \n");
        printf("4.. Frango a passarinho \n");
        printf("Sua opção:  \n");
        scanf("%d", &opcao);
    }while(opcao<1 || opcao>4);
    switch(opcao){
        case 1:
            printf("Seu pedido foi filé ao molho madeira \n");
            printf("Preço do prato R$ 120,00 \n");
            break;
        case 2:
            printf("Seu pedido foi filé Moraes\n");
            printf("Preço do prato R$ 130,00 \n");
            break;
        case 3:
            printf("Seu pedido foi picanha na grelha \n");
            printf("Preço do prato R$ 140,00 \n");
            break;
        case 4:
            printf("Seu pedido foi frango a passarinho \n");
            printf("Preço do prato R$ 80,00 \n");
    }

    printf("Obrigado, volte sempre \n");
    return 0;
}
