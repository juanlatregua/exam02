/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:38:55 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/23 18:50:56 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    char *dest_org;
    
    dest_org = dest;
    while(*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return(dest_org);
    
}

int main()
{
    char src[] = "Hola";
    char src1[] = "Hello";
    char dest[50];
    char des1[50];
    
    printf("%s \n", ft_strcpy(dest, src));
    printf("%s", strcpy(des1, src1));
}