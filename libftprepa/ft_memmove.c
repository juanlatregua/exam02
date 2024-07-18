/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 18:56:29 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/06 19:29:30 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    
    const char *s; 

    if (src == dst)
        return(dst);
    d = (char *)dst;
    s = (const char *)src;
    if(s < d && s + len > d)
    {
        *(d + len) = *(s + len);
    }
    else
    {
        while(len--)
        {
            *d++ = *s++;
        }
    }
    return(dst);
}

int main()
{
    char src[] = "Hola Mundo";
    char dst[20] = "Adios Mundo";
    char dst1[20] = "Adios Mundo";

    ft_memmove(dst, src, 10);
    printf("Esta es mi función: %s\n", dst);

    memmove(dst1, src, 10);
    printf("Esta es la función estándar: %s\n", dst1);

    return 0;
}