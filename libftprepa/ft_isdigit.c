/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 19:17:34 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/06 14:19:42 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
        return(1);
    else
        return(0);
}

int main()
{
    printf("mi funcion %d\n", ft_isdigit('a'));
    printf("mi funcion %d\n", isdigit('a'));
    printf("mi funcion %d\n", ft_isdigit('3'));
    printf("mi funcion %d\n", isdigit('3'));
}
