#include <stdio.h>

int main(void) 
{
    char tablero[8][8];

    tablero[0][0] = 'R';
    tablero[0][1] = 'N';
    tablero[0][2] = 'B';
    tablero[0][3] = 'Q';
    tablero[0][4] = 'K';
    tablero[0][5] = 'B';
    tablero[0][6] = 'N';
    tablero[0][7] = 'R';

    tablero[7][0] = 'R';
    tablero[7][1] = 'N';
    tablero[7][2] = 'B';
    tablero[7][3] = 'Q';
    tablero[7][4] = 'K';
    tablero[7][5] = 'B';
    tablero[7][6] = 'N';
    tablero[7][7] = 'R';

    int fila;
    for (fila = 0; fila < 8; fila++)
    {
        tablero[1][fila] = 'P';
        tablero[2][fila] = ' ';
        tablero[3][fila] = ' ';
        tablero[4][fila] = ' ';
        tablero[5][fila] = ' ';
        tablero[6][fila] = 'P';
    }

    int columna;
    for (fila = 0; fila < 8; fila++)
    {
        for (columna = 0; columna < 8; columna++)
        {
            printf("%c", tablero[fila][columna]);
        }
        printf("\n");
    }

    return 0;
}
