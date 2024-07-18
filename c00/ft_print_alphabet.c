#include <unistd.h>

void ft_print_alphabet(void)
{
    write(1, "abcdefghijklmnopqrstuvwxyz", 27);
}

int main(void)
{
    ft_print_alphabet(); // no lleva argumentos porque no tiene parametros
    return(0); // es 0 porque no devuelve nada solo ejecuta la funcion que imprime el alfabeto
}