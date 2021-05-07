#include <stdio.h>
#include <stdlib.h>

//Programa para verificar a situação de 04 alunos
//Cada um possui duas notas, e a média de cada um é apurada pela fórmula
// (nota p1 + nota p2). Programa deve emitir a situação final do aluno
// A situação é Aprovado se a média for maior ou igual 6
//Desejável informar o nome completo de cada aluno

int main() {
    char alunos[4][51];
    float notas[4][3];
    //1. pedindo o nome e as notas
    for(int i = 0; i < 4; i++){
        printf("============================================\n");
        while(getchar()!= '\n');
        printf("Digite o nome do %dº aluno \n", i+1);
        scanf("%[^\n]s", alunos[i]);
        for(int j=0; j < 2;j++){
            printf("Digite a nota %d do aluno %s \n", j+1, alunos[i]);
            scanf("%f", &notas[i][j]);
        }
        notas[i][2] = (notas[i][0] + notas[i][1]) / 2;
        printf("\n");
    }

    //2. Verificar se o aluno passou ou não. Já emitindo o resultado
    for(int i=0; i < 4; i++){
        printf("==============================================\n");
        if(notas[i][2] >= 6){
            printf("Parabéns %s \n", alunos[i]);
            printf("Você foi aprovado!!! \n");
        }else{
            printf("Que Pena!!! %s \n", alunos[i]);
            printf("Você foi reprovado!!! \n");
        }
        printf("Sua média final: %.2f \n", notas[i][2]);
        printf("==============================================\n");
    }
    return 0;
}
