/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 19:38:02 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/27 19:42:47 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_lowercase(char c)
{
    return(c >= 'a' && c <= 'z');
}

int ft_str_is_lowercase(char *str)
{
    while(*str)
    {
        if(!ft_is_lowercase(*str))
            return(0);
        str++;
    }
    return(1);
}

int main()
{
    printf("Son minúsculas abcd devuelvo 1: %d \n", ft_str_is_lowercase("abcd"));
    printf(" No son minúsculas abCd devuelvo 0: %d", ft_str_is_lowercase("abCd"));
}