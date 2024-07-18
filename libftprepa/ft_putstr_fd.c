/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsilva-m <jsilva-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:39:41 by jsilva-m          #+#    #+#             */
/*   Updated: 2024/06/17 18:57:35 by jsilva-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <fcntl.h>
#include <unistd.h>

void ft_putstr_fd(void *s, int fd)
{
    if(!s)
        return;
    write(fd, s, strlen(s));
}
int main()
{
    int fd = open("archivo.txt", O_WRONLY | O_CREAT, 0644);
    if(fd == -1)
        return 1;
    
    char s[] = "hola Mundo";
    ft_putstr_fd(s, fd);
    close(fd);
    return(0);
    
}