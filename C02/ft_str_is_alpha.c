/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 13:43:45 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/27 19:02:53 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_alpha(char c)
{
    return((c >='A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int ft_str_is_alpha(char *str)
{
   
    while(*str)
    {
        if (!ft_is_alpha(*str))
            return(0);
        str++;
    }
    return(1);
}

int main()
{
    printf("Al pasar abcde devuelve : %d \n", ft_str_is_alpha("abcde"));
    printf("Al pasra abdcd12 devuelve: %d \n", ft_str_is_alpha("abdcd12"));
    printf("Al pasar -12 devuelve :  %d", ft_str_is_alpha("-12"));

}