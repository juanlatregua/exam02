/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 17:31:52 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/13 18:14:11 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *str1 = (const unsigned char *)s1;
    const unsigned char *str2 = (const unsigned char *)s2;

    while(n > 0)
    {
        if(*str1 != *str2)
        {
            return(*str1 - *str2);
        }
        str1++;
        str2++;
        n--;
    }
    return(0);
}
int main()
{
    const unsigned char str1[] = "Hola Mundo";
    const unsigned char str2[] = "Hola Mundo";
    
    size_t len = (strlen((const char *)str1) + 1);
    int result = ft_memcmp(str1, str2, 5);
    int result1 = memcmp(str1, str2, 5);
    printf("Este es el resultado de mi función %d\n", result);
    printf("Este es el resultado de mi función %d\n", result1);

    
}