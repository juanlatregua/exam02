/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:42:13 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/10 20:17:11 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
    char ch = (char)c;
    char *last_occurrence = NULL;
    
    
    while(*str)
    {
        
        if(*str == ch)
            last_occurrence = (char *)str;
        str++;
    }
    if(ch == '\0')
        return((char *)str);
    return(last_occurrence);
}
int main()
{
    const char str[] = "hola Málaga";
    const char c = 'a';
    char *result;
    char *result1;

    result = strrchr(str, c);
    result1 = ft_strrchr(str, c);

    printf("estes es el valor '%c' es mi función - '%s'\n", c, result);
    printf("estes es el valor '%c' es la función - '%s'\n", c, result1);


}
