#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int dimension;
    scanf("%d", &dimension);

    if (dimension > 20)
    {
        puts("La matriz es demasiado grande.");
    }
    else
    {
        int **matriz = (int**)malloc(sizeof(int*) * dimension);
        int fila, columna;

        for (fila = 0; fila < dimension; fila++)
        {
            matriz[fila] = (int*)malloc(sizeof(int) * dimension);
        }

        for (fila = 0; fila < dimension; fila++)
        {
            for (columna = 0; columna < dimension; columna++)
            {
                matriz[fila][columna] = (fila + 1) * (columna + 1);
            }
        }

        printf("%4c", ' ');
        for (columna = 0; columna < dimension; columna++)
        {
            printf("%4d", columna + 1);
        }
        printf("\n");

        for (fila = 0; fila < dimension; fila++)
        {
            printf("%4d", fila + 1);
            for (columna = 0; columna < dimension; columna++)
            {
                printf("%4d", matriz[fila][columna]);
            }
            printf("\n");
        }

        for (fila = 0; fila < dimension; fila++)
        {
            free(matriz[fila]);
        }
        free(matriz);
    }

    return 0;
}
