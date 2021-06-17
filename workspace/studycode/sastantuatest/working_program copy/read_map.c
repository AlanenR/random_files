/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:45:30 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 11:04:29 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUF_SIZE 400

char   *ft_read_map(char *file)
{
    int        fd;
    int        ret;
	char		*buf;

	buf = ((char*)malloc(sizeof(char) * BUF_SIZE));
	
    fd = open(file, O_RDONLY);
    if (fd == -1)
    {
 
    }
    while ((ret = read(fd, buf, BUF_SIZE)))
    {
        buf[ret] = '\0';
    }
	close(fd);

	return (buf);
}
