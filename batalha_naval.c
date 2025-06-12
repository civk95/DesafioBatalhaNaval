#include <stdio.h>

// FORAM FEITOS SOMENTE ATÉ O DESAFIO NOVATO E AVENTUREIRO !!

int main(){

    int tabuleiro[10][10];
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    
    printf("\n===== BATALHA NAVAL =====\n");
    printf("  "); // espaço no início das letras
    for(int i = 0; i < 10; i++){
        printf(" %c", linha[i]);
    }

    // preenchendo a matriz com zeros
    printf("\n");
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // imprimindo a matriz
    for(int i = 0; i < 10; i++){
        printf("%d", i+1);
        if(i != 9) printf(" "); // pular o espaço do número 10 que tem dois algarismos
        for(int j = 0; j < 10; j++){
            // colocando primeiro navio (horizontal): linha 9, colunas C D e E
            if(i == 8 && (j == 2 || j == 3 || j == 4)) {
                tabuleiro[i][j] = 1;
            }
            // colocando segundo navio (vertical): linhas 2, 3, 4, coluna F
            if((i == 1 || i == 2 || i == 3) && j == 5) {
                tabuleiro[i][j] = 2;
            }
            // colocando terceiro navio (diagonal): A1, B2, C3 
            if((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2)) {
                tabuleiro[i][j] = 3;
            }
            // colocando quarto naivo (diagonal): F7, G6, H5
            if((i == 4 && j == 7) || (i == 5 && j == 6) || (i == 6 && j == 5)) {
                tabuleiro[i][j] = 4;
            }
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;

}