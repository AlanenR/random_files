/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 20:45:30 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 06:21:08 by ralanen          ###   ########.fr       */
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
int		ft_strlen(char *row1)
{
	int i;

	i = 0;
	while (row1[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strlen_line(char *row1)
{
	int i;

	i = 0;
	while (row1[i] != '\n')
	{
		i++;
	}
	return (i);
}


void nextfunction(char *str)
{
	int row1;
	int strmap;
	char fill;
	char obs;
	char empt;

	row1 = ft_strlen_line(str);
	fill = str[(row1 - 1)];
	obs = str[(row1 - 2)];
	empt = str[(row1 - 3)];
	
	strmap = ft_strlen(str);
	strmap = strmap - row1;

	printf("%d row1\n", row1);
	printf("%c fill\n", fill);
	printf("%c obs\n", obs);
	printf("%c empt\n", empt);
	printf("%d strmap\n", strmap);

}

int main(int argc, char **argv)
{
	char *data;

	if (argc < 0)
	return (0);
	
	data = ft_read_map(argv[1]);
	nextfunction(data);
	return (0);
}