/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 10:48:47 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/20 11:46:37 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if(nb < 0)
    {   
        ft_putchar('-');
        nb = -nb;
        ft_putnbr(nb);
    }
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
        ft_putchar(nb + 48);
}

int main(void)
{
    ft_putnbr(42);
    
    ft_putnbr(-42);
    
    ft_putnbr(123456);
    return(0);
}