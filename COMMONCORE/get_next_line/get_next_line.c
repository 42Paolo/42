/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabrogi <pabrogi@student.42firenze.it>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:02:47 by pabrogi           #+#    #+#             */
/*   Updated: 2025/11/10 16:34:31 by pabrogi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void    read_file(int fd)
{
    static char buffer[128];
    int         bytes_read;

    while ((bytes_read = read(fd, buffer, 127)) > 0)
    {
        buffer[bytes_read] = '\0'; 
		printf("%s", buffer);
    }
    if (bytes_read == -1)
        perror("read");
}

int main(void)
{
    int fd = open("prova.txt", O_RDONLY);
    if (fd == -1)
        return 1;
    read_file(fd);
    close(fd);
    return 0;
}