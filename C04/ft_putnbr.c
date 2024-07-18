/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:56:27 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/30 20:51:07 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
   write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    if(nb == -2147483648)
    {
        write(1, "-2", 2);
        ft_putnbr(147483648);
    }
    else
    {
        if(nb < 0)
        {
            ft_putchar('-');
            nb = -nb;
        }
        if(nb > 9)
        {
            ft_putnbr(nb / 10);
        }
        ft_putchar(nb % 10 + '0');  
    }
}
int main()
{
    int nb = -2147483648;
    int nb1 = 3456;
    int nb2 = 0;
    printf("esta es mi fución: ");
    printf("\n");
    ft_putnbr(nb);
    printf("\n");
    printf("esta es mi fución: ");
    printf("\n");
    ft_putnbr(nb1);
    printf("\n");
    printf("esta es mi fución: ");
    printf("\n");
    ft_putnbr(nb2);
    printf("\n");
    
    printf("esta es la función estándar: %d\n", nb);
    printf("esta es la función estándar: %d\n", nb1);
    printf("esta es la función estándar: %d\n", nb2);
}