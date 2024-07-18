/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:34:51 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/03 16:41:10 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(*str)
    {
        i++;
        str++;
    }
    return(i);
}

int ft_checkerror(char *base)
{
    char *p;
    char *q;
    
    if(*base == '\0' || *(base +1) == '\0' )
        return(0);
    p = base;
    while(*p)
    {
        if(*p <= 32 || *p == 127 || *p == 43 || *p == 45)
        return(0);
        q = base;
        while(q < p)
        {
            if(*p == *q)
            return(0);
            q++;
        }
        p++;
    }   
    return(1);  
}
void ft_putnbr_base(int nbr, char *base)
{
   int len;
   int error;
   long     nb;
   
   len = ft_strlen(base);
   error = ft_checkerror(base);
   nb = nbr;
   
   if(error == 1)
   {
        if(nb < 0)
        {
            ft_putchar('-');
            nb *= -1;
        }
        
        if(nb < len)
        {
            ft_putchar(base[nb]);
        }
        if(nb >= len)
        {
            ft_putnbr_base(nb / len, base);
            ft_putnbr_base(nb % len, base);
        }
   }
}
int		main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
}