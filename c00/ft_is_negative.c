/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:35:10 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/19 11:45:41 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_is_negative(int n)
{
    if(n >=0)
    {
        write(1, "P", 1);
    }

    else
    {
        write(1, "N", 1);
    }
}

int main(void)
{
    ft_is_negative(-1);

    ft_is_negative(2);
    ft_is_negative(0);
    return(0);
}