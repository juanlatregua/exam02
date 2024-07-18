/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:17:24 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/31 13:05:45 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_isdigit(char c)
{
    if(c >= '0' && c <= '9')
        return(1);
    else
        return(0);
}

int ft_isspace(int c)
{
    if( c == ' ' || c == '\t' || c == '\n' || 
    c == '\v' || c == '\f' || c == 'v' || c == '\r')
        return(1);
    else
        return(0);
}

int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;
    while(ft_isspace(*str))
    {
        str++;
    }
    while(*str == '-' || *str == '+')
    {
        if(*str == '-')
        {
            sign *= -1;
        }
        str++;
    }
    while(ft_isdigit(*str))
    {
        result = result * 10 + (*str - '0');
        str++;
    }
    return(sign * result);
}

int main()
{
    char str[] = "   -+--+1234ab5677";
    int num = ft_atoi(str);
    int num1 = atoi(str);

    printf("Esta es mi fucnión: %d \n", num);
    printf("Esta es la fucnión: %d \n", num1);
}