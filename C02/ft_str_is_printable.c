/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:00:39 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/27 20:07:09 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_printable(char c)
{
    return(c >= 32 && c <= 126);
}

int ft_str_is_printable(char *str)
{
    while(*str)
    {
        if(!ft_is_printable(*str))
            return(0);
        str++;
    }
    return(1);
}

int main()
{
    printf("los valores se pueden imprimer 1: %d", ft_str_is_printable("ABDELKFSCO?I340990%"));
    printf("los valores se pueden imprimer 1: %d", ft_str_is_printable("\n\t\v"));

}