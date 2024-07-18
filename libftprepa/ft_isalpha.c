/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:57:58 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/06 14:19:37 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return(1);
    else
        return(0);
}*/

int main()
{
    
    printf("esta es mi función %d \n", ft_isalpha('a'));
    printf("esta es la función %d \n", isalpha('a'));

    printf("esta es mi función %d \n", ft_isalpha('2'));
    printf("esta es mi función %d \n", isalpha('2'));
    printf("esta es mi función %d \n", ft_isalpha('T'));
    printf("esta es la función %d \n", isalpha('T'));
}
