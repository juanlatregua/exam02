/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:49:08 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/21 12:35:59 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_substr(const char s, unsigned int start, size_t len)
{
    char *src;
    char *res;
    size_t reslen;
    
    if(!s)
        return NULL;
    if(ft_strlen(s) < len)
        return(ft_strdup(""));
    src = (char *)s + start;
    if(ft_strlen(src) < len)
        reslen = ft_strlen(src) +1;
    else
        reslen = len + 1;
    res = (reslen)
}
