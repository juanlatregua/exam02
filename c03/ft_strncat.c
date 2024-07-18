/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:18:45 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/29 18:27:24 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    char *dest_org;
    
    dest_org = dest;
    while(*dest)
    {
        dest++;
    }
    while(*src && nb >1)
    {
        src++;
        dest++;
        nb--;
    }
    *dest = '\0';
    return(dest_org);
}
int main()
{
    char dest[20] = "HOLA";
    char dest1[20] = "HOLA";
    char *src = "Mundo";
    unsigned int nb = 3;

    printf("Esta es la función original %s\n", strncat(dest, src, nb));
    printf("Esta es mi función  %s\n", strncat(dest1, src, nb));
}