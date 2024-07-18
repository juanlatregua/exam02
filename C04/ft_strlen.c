/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:15:17 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/30 18:27:35 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{
    unsigned int lengh = 0;
    while(*str)
    {
        str++;
        lengh++;
    }
    return(lengh);
}

int main()
{
    char str[] = "Hola machote!";
    unsigned int result = ft_strlen(str);
    unsigned int result1 = strlen(str);
    printf("la función original %u\n", result);
    printf("mi función %u", result1);
}