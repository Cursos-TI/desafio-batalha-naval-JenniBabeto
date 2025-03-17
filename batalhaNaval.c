#include <stdio.h>

int main () {
    char coluna[] = "   A B C D E F G H I J"; 
    printf("%s\n", coluna);
    int i, j, matriz[10][10] = {0}; //variavel matriz de 0
    for (i=0; i<10; i++) {
        printf ("%2d ", i+1); //nome da linha começando do 1
        for (j=0; j<10; j++) {
        printf("%d ", matriz[i][j]);  
        }
        printf("\n"); // serve para pular as linhas
    }
    printf("\n");
    //troca de valores
    printf("%s\n", coluna);
    for (i=0; i<10; i++) { //loop primario
        printf ("%2d ", i+1);
        for (j=0; j<10; j++) { //loop secundário para atribuição dos barcos
            if (i==1 && j>5 && j<9){ //barco horizontal
                matriz[i][j] = 3;
            };
            if (j==1 && i>2 && i<6){ //barco vertical
                matriz[i][j] = 3;
            };
            if (i==j && i>=4 && i<7){ // barco diagonal principal
                matriz[i][j] = 3;
            };
            if (9-j==i && j>=1 && j<4){ //barco diagonal secundaria
                matriz[i][j] = 3; 
            };
            
            
        printf("%d ", matriz[i][j]);  
        }
        printf("\n"); // serve para pular linhas entre as colunas
    }
}
