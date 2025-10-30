#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamano;
    scanf("%d", &tamano);

    if (tamano >= 1024 * 1024)
    {
        puts("Demasiada memoria solicitada.");
    }
    else
    {
        char *arreglo = (char *) malloc(sizeof(char) * tamano);
        /* sizeof(char) es 1 por definición en el estándar, no es necesario escribirlo */
        
        int indice;
        for (indice = 0; indice < tamano; indice++)
        {
            arreglo[indice] = 'A' + (indice % 26);
        }

        int limite = tamano;
        if (limite > 400)
            limite = 400;

        for (indice = 0; indice < limite; indice++)
        {
            printf("%c", arreglo[indice]);
            if ((indice + 1) % 40 == 0)
                printf("\n");
        }

        printf("\n");
        free(arreglo); // buena práctica: liberar memoria reservada
    }

    return 0;
}
