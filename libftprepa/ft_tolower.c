/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:29:14 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/07 13:35:37 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return(c - 'A' + 'a');
    else 
    return(c);
}

int main()
{
    int c = 'A';
    int d = 'C';

    printf("%c\n", ft_tolower(c));
    printf("%c\n", ft_tolower(d));
    return(0);
}