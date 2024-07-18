/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:59:28 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/05/28 17:25:41 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

bool ft_is_alpha(char c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

bool ft_islower(char c)
{
    return(c >= 'a' && c <= 'z');
}

char ft_toupper(char c)
{
    if(ft_islower(c))
        return(c - 'a' + 'A');
    else
        return(c);
}

char *ft_strcapitalize(char *str)
{
    bool new_word = true;
    char *start;
    
    start = str;
    while(*str)
    {
        if(ft_is_alpha(*str))
        {
            if(new_word)
            {
                *str = ft_toupper(*str);
                new_word = false;
            }
        }
        else
        {
            new_word = true;
        }
        str++;
    }
    return(start);
}

int main()
{
    char str[] = "salut, comment ça va? 42mots quarente-deux; cinquante+et+un";
    printf("%s\n", ft_strcapitalize(str));
}
