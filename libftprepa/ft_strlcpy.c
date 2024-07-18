/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:49:45 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/06 20:57:27 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strlen(const char *c)
{
    int i;
    i = 0;
    while(*c)
    {
        c++;
        i++;
    }
    return(i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srcsize;
    
    srcsize = ft_strlen(src);
    if(dstsize == 0)
        return(srcsize);
    while(dstsize > 1 && *src)
    {
        *dst++ = *src++;
        dstsize--;
    }
    //if(dstsize > 0)
        *dst = '\0';
    return(srcsize);
}

int main()
{
    char src[20] = "HOLA MUNDO";
    char dst[20];
    char src1[20] = "HOLA MUNDO";
    char dst1[20];
    size_t dstsize = 4;

    printf("Esta es mi longitud; %zu \n",ft_strlcpy(dst, src, dstsize));
    printf("Esta es mi función: %s\n", dst);
    printf("Esta es la longitud; %zu \n",strlcpy(dst1, src1, dstsize));
    printf("Esta es la función: %s\n", dst1);
}