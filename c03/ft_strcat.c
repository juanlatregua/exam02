/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:59:57 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/29 18:07:41 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src)
{
    char *dest_org;
    
    dest_org = dest;
    while(*dest)
    {
        dest++;
    }
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return(dest_org);
    
}

int main()
{
    char dest[34] = "Hola";
    char dest1[34] = "Hola";
    char src[] = "mundo";

    printf("Esta es la función original strcat: %s\n", strcat(dest, src));
    printf("Esta es mi función  strcat: %s\n", ft_strcat(dest1, src));
}