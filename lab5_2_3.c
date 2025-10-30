#include <stdio.h>

int main(void) 
{
    char semana[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    int numeroDia;
    scanf("%d", &numeroDia);

    if (numeroDia >= 0 && numeroDia < 7)
    {
        printf("Versión con puntero: %s\n", *(semana + numeroDia));
        printf("Versión con índice: %s\n", semana[numeroDia]);
    }
    else
    {
        puts("Error, día no válido.");
    }

    return 0;
}
