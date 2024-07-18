/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:06:17 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/28 10:32:12 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    ft_lowcase(char c)
{
    if(c >= 'A' && c <= 'Z')
        return(c - 'A' + 'a');
    else
    return(c);
}

char *ft_strlowcase(char *str)
{
    char *start;
    
    start = str;
    while(*str)
    {
        *str = ft_lowcase(*str);
        str++;
    }
    return(start);
}

int main()
{
    char str[] = "HOLA";
    printf("Pon en minúscula HOLA: %s", ft_strlowcase(str));
}