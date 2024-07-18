/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:16:31 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/27 19:28:34 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_numeric(char c)
{
    return(c >= '0' && c <= '9');
}

int ft_str_is_numeric(char *str)
{
    while(*str)
    {
        if(!ft_is_numeric(*str))
            return(0);
        str++;
    }
    return(1);
}

int main()
{
    printf("Al introducir 1234 en mi fución devuelve 1: %d \n", ft_str_is_numeric("1234"));
    printf("Al introducir 1234abc en mi fución devuelve 0: %d \n", ft_str_is_numeric("1234abc"));
    printf("Al introducir -1234 en mi fución devuelve 0 %d", ft_str_is_numeric("-1234"));

}