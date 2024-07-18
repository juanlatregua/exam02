/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:11:46 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/10 19:38:58 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
    char ch = (char)c;

    
    while(*str)
    {
        if(*str == ch)
            return((char *)str);
        str++;
        
    }
    if(ch == '\0')
        return((char *)str);
    return(NULL);
}

int main()
/*{
    const char str[] = "hola";
    const char d = 'p';

    char *result1;
    char *result2;
    result1 = ft_strchr(str, d);
    result2 = strchr(str, d);

    if (result1)
    {
        printf("ft_strchr encontró |%c| en la posición: |%s|\n", d, result1);
    }
    if (result2)
    {
        printf("strchr encontró '%c' en la posición: %s\n", d, result2);
    }
    return 0;
    
}*/
{
    const char str[] = "http://www.w3cschool.cc";
   const char ch = 'a';
   char *ret;
   char *ret1;

   ret = strchr(str, ch);
   ret1 = ft_strchr(str, ch);

   printf("|%c| es el resultado de la función - '%s'\n", ch, ret);
   printf("|%c| es el resultado de mi función - '%s'\n", ch, ret1);

   
   return(0);
}