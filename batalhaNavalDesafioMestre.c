#include <stdio.h>

int main () {
    char coluna[] = "   A B C D E F G H I J";
    printf("%s\n", coluna);
    int i, j, matriz[10][10] = {0};
    for (i=0; i<10; i++) {
        printf ("%02d ", i+1);
        for (j=0; j<10; j++) {
        printf("%d ", matriz[i][j]);  
        }
        printf("\n"); // serve para pular as linhas
    }
    
    printf("\n");
    //troca de valores
    printf("%s\n", coluna);
    for (i=0; i<10; i++) {
        printf ("%02d ", i+1);
        for (j=0; j<10; j++) {
            if (i==2 && j>=0 && j<5){ //Cruz horizontal
                matriz[i][j] = 2;
            };
            if (j==2 && i>=0 && i<5){ //Cruz vertical
                matriz[i][j] = 2;
            }
                        if (i==7 && j==2){ //Horizontal 1 triangulo
                matriz[i][j] = 4;
            }
            if (i==8 && j>=1 && j<4){ //Horizontal 3 triangulo
                matriz[i][j] = 4;
            };
            if (i==9 && j>=0 && j<5){ //Horizontal 5 triangulo
                matriz[i][j] = 4;
            };
            if (j==6 && i>=3 && i<8){ //Losango - vertical
                matriz[i][j] = 5;
            };
            if (i==5 && j>=4 && j<9){ //Losango - horizontal
                matriz[i][j] = 5;
            };
            if (i==j-1 && j>=5 && j<8){ //Losango - diagonal principal
                matriz[i][j] = 5;
            };
            if (11-j==i && j>=5 && j<8){ //Losango - diagonal secundaria
                matriz[i][j] = 5;
                
            }
        printf("%d ", matriz[i][j]);  
        }
        printf("\n"); // serve para pular linhas entre as colunas
    }
}