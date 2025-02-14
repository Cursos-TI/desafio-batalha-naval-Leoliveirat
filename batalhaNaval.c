#include <stdio.h>

int main (){

    int tabuleiro1[10][10] = {0}; //DECLARANDO O TAMANHO DA MATRIZ QUE REPRESENTA O TABULEIRO (DO CONE)
    int tabuleiro2[10][10] = {0}; //DECLARANDO O TAMANHO DA MATRIZ QUE REPRESENTA O TABULEIRO (DO OCTAEDRO)
    int tabuleiro3[10][10] = {0}; //DECLARANDO O TAMANHO DA MATRIZ QUE REPRESENTA O TABULEIRO (DA CRUZ)
    
    int x = 5, y = 5; //DEFININDO UM PONTO DE PARTIDA NA MATRIZ, PARA POSICIONAR AS FORMAS
    //PONTO DE PARTIDA, LINHA 5 E COLUNA 5.


    
//CONE

//DEFININDO AS POSIÇÕES DOS NÚMEROS 1 NA MATRIZ, PARA A FORMAÇÃO DO CONE.

for (int j = y; j <= y; j++) {
    tabuleiro1[x - 2][j] = 1;
}
for (int j = y - 1; j <= y + 1; j++) {
    tabuleiro1[x - 1][j] = 1;
}
for (int j = y - 2; j <= y + 2; j++) {
    tabuleiro1[x][j] = 1;
}

// IMPRIMINDO A IMAGEM DO TABULEIRO COM O CONE
printf("Habilidade Cone:\n");
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d  ", tabuleiro1[i][j]);
    }
    printf("\n");
}

//DEFININDO AS POSIÇÕES DOS NÚMEROS 1 NA MATRIZ, PARA A FORMAÇÃO DO OCTAEDRO.
for (int j = 2; j <= 2; j++) {
    tabuleiro2[0][j] = 1;
}
for (int j = 1; j <= 3; j++) {
    tabuleiro2[1][j] = 1;
}
for (int j = 2; j <= 2; j++) {
    tabuleiro2[2][j] = 1;
}

// IMPRIMINDO A IMAGEM DO TABULEIRO COM O OCTAEDRO
printf("\nHabilidade Octaedro:\n");
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d  ", tabuleiro2[i][j]);
    }
    printf("\n");
}

// DEFININDO AS POSIÇÕES DOS NÚMEROS 1 NA MATRIZ, PARA A FORMAÇÃO DA CRUZ.

for (int j = y; j <= y; j++) { 
    tabuleiro3[x][j] = 1;
}
for (int j = y - 2; j <= y + 2; j++) { // 
    tabuleiro3[x][j] = 1;
}
for (int i = x - 1; i <= x + 1; i++) { 
    tabuleiro3[i][y] = 1;
}

// IMPRIMINDO A IMAGEM DO TABULEIRO COM A CRUZ
printf("\nHabilidade Cruz:\n");
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        printf("%d  ", tabuleiro3[i][j]);
    }
    printf("\n");
}


return 0;
}