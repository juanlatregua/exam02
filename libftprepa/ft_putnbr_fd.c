/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:00:40 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/17 19:15:27 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    if(n < 0)
    {
        if(n == -2147483648)
        {
            ft_putstr_fd("-2147483648",fd);
            return;
        }
            ft_putchar_fd("-", fd)
            n = -n;
    } 
    if( n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putchar_ft((n % 10) + '0', fd);
    }
    else
    ft_putchar_fd(n + '0', fd);
}