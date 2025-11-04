#include <stdio.h>

void saludo()
{
    puts("¡Hola!");
}

void otraFuncion()
{
    puts("Soy yo, otra función.");
}

int main(void)
{
    saludo();
    saludo();
    saludo();
    otraFuncion();
    saludo();
    otraFuncion();
    return 0;
}
