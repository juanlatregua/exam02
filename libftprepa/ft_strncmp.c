/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:09:07 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/13 17:58:29 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>



int ft_strncmp(const char *s1, const char *s2, size_t n)

{
    while(n > 0 && *s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
        n--;
    }
    if(n == 0)
        return 0;
    else
        return(*(unsigned char *)s1 - *(unsigned char *)s2);
}
int main()
{
    const char s1[] = "Hola Mundo";
    const char s2[] = "Honda Madrid";
    size_t n = 3;
    
    printf("La comparación de mis string %d es:", ft_strncmp(s1, s2, n));
    printf("La comparación de mis string  es: %d\n", strncmp(s1, s2, n));

}