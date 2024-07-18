#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)

int ft_strlen(char *str)

int ft_checkerror(char *str)

int nbr_base(nbr, char *base)
{
    int len;
    int error;
    long    nb;

    nb = nbr;
    len = ft_strlen(base);
    error = ft_checkerror(base);

    if(error == 1)
    {
        if(nb < 0)
        {
            ft_putchar('-');
            nb *= -1;
        }
        if(len < nb)
        {
            ft_putchar(base[nb]);
        }
        if(len >= nb)
        {
            ft_putnbr_base(nb / len, base);
            ft_putnbr_base(nb % len, base);
            
        }
    }
}