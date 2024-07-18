/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:20:23 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/11 19:39:07 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
    const char ch = (char) c;
    const unsigned char *str = (const unsigned char *)s;
    
    while(n > 0)
    {
     
        if(*str == ch)
        {
            return(void *)str;
        }
        str++;
        n--;
    }
    return(NULL);
}

int main()
{
    const char s[] = "HOLA MUNDO";
    int c = 'D';
    size_t n = 10;
    
    char *result = memchr(s, c, n);
    char *result1 = ft_memchr(s, c, n);
    if(result != NULL)
          printf("EL caracter '%c', encontrado en |%s| en la posición: %ld\n", c, s, result -s);
    else
        printf("el caracter '%c', no encontrado en |%s|.\n", c, s);
    if(result1 != NULL)
          printf("EL caracter '%c', encontrado en |%s| en la posición: %ld\n", c, s, result1 -s);
    else
        printf("el caracter '%c', no encontrado en |%s|.\n", c, s);
}
    
  