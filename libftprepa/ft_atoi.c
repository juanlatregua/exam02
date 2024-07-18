/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 18:56:37 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/13 19:51:11 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char ft_isdigit(char c)
{
    if(c >= '0' && c <= '9' )
    return(1);
    else
    return(0);
}

int ft_isspace(int c)
{
    if(c == ' ' || c == '\n' || c == '\f'|| 
    c == '\r'|| c == '\v' || c == '\t')
        return(1);
    else
        return(0);
}
int ft_atoi(char *str)
{
    int num = 0;
    int sign = 1;
    
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
        num = num * 10 + (*str - '0');
        str++;
    }
    return(sign * num);
}
int main()
{
    char str[] = "   +----2345";
    int num = ft_atoi(str);
    int num1 = atoi(str);

    printf("esta es mi función %d\n:", num);
    printf("esta es la función %d\n:", num1);

}