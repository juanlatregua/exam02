/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:15:50 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/07 13:28:31 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
        return(c - 'a' + 'A');
    else
    return(c);
}

int main()
{
    int c = 'a';
    int d = 'b';

    printf("Esta es mi fucnión %c \n", ft_toupper(c));
    printf("Esta es mi fucnión %c \n", ft_toupper(d));
    printf("Esta es mi fucnión %c \n", toupper(c));
    printf("Esta es mi fucnión %c \n", toupper(d));
}