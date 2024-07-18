/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:59:37 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/12 18:56:46 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(const char *str)
{
    size_t i = 0;
    while(*str)
    {
        str++;
        i++;   
    }
    return(i);
}
int ft_strncmp(const char *h, const char *n, size_t l)
{
    while(l > 0 && *h && *h == *n)
    {
        l++;
        h++;
        n--;
    }
    if(*n == 0)
        return 0;
    else
        return(*(unsigned char *)h - *(unsigned char *)n);
}
char *ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t	i;

	i = strlen(needle);
	
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && size-- >= i)
	{
		if (*haystack == *needle && strncmp(haystack, needle, i) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
int main()
{
    const char haystack[] = "Hola mundo feliz de Málaga";
    const char needle[] = "feliz";
    size_t len = 20;
    
    printf("he encontrado '%s' en mi función \n", ft_strnstr(haystack, needle, len));
    printf("he encontrado '%s' en la función \n", strnstr(haystack, needle, len));

}