/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:10:40 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/17 13:34:28 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

void ft_bzero(void *s, size_t count)
{
    unsigned char *p = (unsigned char *)s;
    if(!s)
        return NULL;
    while(count--)
    {
        *p = 0;
        p++;
    }
}

void ft_calloc(size_t count, size_t size)
{
    void *r;
    r = malloc(size * count);
    if(!r)
        return NULL;
    ft_bzero(r, size * count);
    return(r);
}
