/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:31:33 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/30 19:54:14 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str, 1);
        str++;
    }
}
int main(void)
{
    char str[] = "Hola Mundo";
    ft_putstr(str);
    return(0;)
}