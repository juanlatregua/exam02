/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 19:28:10 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/28 19:55:37 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 &&(*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int main()
{
    char s1[] = "Mastodonte";
    char s2[] = "CABEZ";
    char s3[] = "hola";
    char s4[] = "hola";
    char s5[] = "CABEZ";
    char s6[] = "Mastodonte";

    printf("La función orignial\n: %d\n", strcmp(s1, s2));
    printf("%d\n", strcmp(s3, s4));
    printf("%d\n", strcmp(s5, s6));
    printf("Mi función:\n%d\n", ft_strcmp(s1, s2));
    printf("%d\n", ft_strcmp(s3, s4));
    printf("%d", ft_strcmp(s5, s6));
}