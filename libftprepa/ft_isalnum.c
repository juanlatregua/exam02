/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:27:08 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/06 14:19:33 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>

int ft_isalpha(int c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int ft_isdigit(int c)
{
    return(c >= '0' && c <= '9');
}
int ft_isalnum(int c)
{
    return((ft_isalpha(c)) || (ft_isdigit(c)));
}

int main()
{
    printf("esta es mi función %d \n", ft_isalnum('a'));
    printf("esta es mi función %d \n", isalnum('a'));
    printf("esta es mi función %d \n", ft_isalnum('0'));
    printf("esta es mi función %d \n", isalnum('0'));
    printf("esta es mi función %d \n", ft_isalnum(' '));
    printf("esta es mi función %d \n", isalnum(' '));
}