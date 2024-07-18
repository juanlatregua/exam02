/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:42:14 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/29 19:47:43 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
    char *str_org;
    char *to_find_org;
    
    if(!*to_find)
        return(str);
    
    str_org = str;
    while(*str_org)
    {
        to_find_org =  to_find;
        while(*str_org && *to_find_org && *str_org == *to_find_org)
        {
            str_org++;
            to_find_org++;
        }
        if(!*to_find_org)
            return(str);
        str++;
        str_org = str;
    }
    return(NULL);
}

int main()
{
    char str[] = "Hola Mundo cruel";
    char to_find[] = "";
    printf("esta es la función original %s\n", strstr(str, to_find));
    printf("esta es mi función original %s", ft_strstr(str, to_find));

}