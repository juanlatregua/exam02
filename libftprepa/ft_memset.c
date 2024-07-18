/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:41:23 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/06 14:19:48 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *p;
    unsigned char ch;

    p = (unsigned char *)b;
    ch = (unsigned char)c;
    while(len--)
    {
        *p = ch;
        p++; 
    }
    return(b);
}
int main()
{
    char str[50] = "esto es un ejemplo";
    char str1[50] = "esto es un ejemplo";
    
    ft_memset(str, '-', 20);
    printf("esta es mi función: %s\n", str);
    memset(str1, '-', 20);
    printf("esta es la función: %s\n", str1);

}