/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:33:57 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/06 17:52:17 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;
    while(n--)
    {
        *d++ = *s++;
    }
    return(dst);
}

int main()
{
    char src[] = "Hola Mundo";
    char src1[] = "Hola Mundo";
    char dst[20];
    char dst1[20]; 
    
    ft_memcpy(dst, src, 20);
    printf("Esta es mi función %s \n", dst);
    memcpy(dst1, src1, 20);
    printf("Esta es mi función %s \n", dst1);
    
}