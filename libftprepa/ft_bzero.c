/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:18:20 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/17 13:20:26 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>

void ft_bzero(void *b, size_t len)
{
    unsigned char *p;
    
    *p = (unsigned char *)b;
    
    while(len--)
    {
        *p = 0;
        p++;   
    }
}

int main()
{
    char str[20] = "Este es mi ejemplo";
    char str1[20] = "Este es mi ejemplo";

    int c = 0;
    
    ft_bzero(str, 20);
    printf("Esta es mi función: %d\n", ft_bzero(str));
    bzero(str, 20);
    printf("Esta es mi función: %d", ft_bzero(str1));
}