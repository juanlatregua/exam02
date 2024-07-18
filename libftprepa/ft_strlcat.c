/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 09:46:56 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/07 12:45:33 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i = 0;
    while(*str)
    {
        str++;
        i++;
    }
    return(i);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t d_size = ft_strlen(dst);
    size_t s_size = ft_strlen(src);
    
    if(dstsize <= d_size)
        return(dstsize + s_size);
    
    dst += d_size;
    dstsize -= d_size;
    while(dstsize > 1 && *src)
    {
        *dst++ = *src++;
        dstsize--;
    }
    if(dstsize > 0)
        *dst = '\0';
    return(d_size + s_size);
}

int main()
{
    char dst[20] = "Hola ";
    char src[] = "Mundo";

    ft_strlcat(dst, src, 20);
    printf("esta es mi función: %s\n", dst);

    return 0;
}