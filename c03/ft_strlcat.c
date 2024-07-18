/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 20:00:04 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/30 17:44:24 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (*dest && i < size)
	{
		++i;
		++dest;
	}
	while (*src && i + 1 < size)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	if (i < size)
		*dest = 0;
	while (*src)
	{
		++i;
		++src;
	}
	return (i);
}

int main()
{
    char dest[30] = "HOLA";
    char dest1[30] = "HOLA";
    char *src = "mundo";
    unsigned int size = 20;
    unsigned int size1 = 20;
    //unsigned int size = sizeof(dest);
    //unsigned int size1 = sizeof(dest1);

    unsigned int result = strlcat(dest, src, size);
    unsigned int result1 = ft_strlcat(dest1, src, size1);

    printf("Esta es la función %u\n", result);
    printf("Esta es mi función %u\n", result1);
}