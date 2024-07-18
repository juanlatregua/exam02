/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:09:24 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/27 20:30:51 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_toupper(char c)
{
    if(c >= 'a' && c <= 'z')
        return(c -'a' + 'A');
    else
        return(c);
}

char *ft_strupcase(char *str)
{
    char *start;
    
    start = str;
    while(*str)
    {
        *str = ft_toupper(*str);
        str++;
    }
    return(start);
}

int main()
{
    char str[] = "hola";
    printf("Le paso hola en minúscula y lo pone en mayúsula : %s", ft_strupcase(str));
}