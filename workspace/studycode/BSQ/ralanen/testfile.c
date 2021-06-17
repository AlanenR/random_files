/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:33:08 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 17:06:32 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

#include <fcntl.h>

#define BUF_SIZE 8192

char   *ft_read_map(char *file)
{
    int		fd;
    int		ret;
	char	*buf;
	char	*buf2;	

	buf = ((char*)malloc(sizeof(char) * BUF_SIZE));
	
    fd = open(file, O_RDONLY);
    if (fd == -1)
    {
		ft_error("Not a valid file\n");
		return (0);
    }
    while ((ret = read(fd, buf, BUF_SIZE)))
    {
        buf[ret] = '\0';
    }
	close(fd);

	buf2 = buf;
	free(buf);

	return (buf2);
}

int		ft_strlen_line(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

char get_fill(char *str)
{
	int row1;
	int i;
	char *fill;

	row1 = ft_strlen_line(str);
	i = (row1 - 1);
	fill = str[i];
	
	return (fill);
}

int main(int argc, char **argv)
{
	
	char *data;
	char *fill;
	/*
	char *obs;
	char *empt;
	char *map;
	*/

	if (argc < 0)
	ft_error("No file provided");
	
	data = ft_read_map(argv[1]);
	printf("%s", data);
	fill = get_fill(data);
	/*
	obs = get_obs(data);
	empt = get_empt(data);
	map = ft_extract_map(data);
	valid_map(map, obs, empt);
	emergency_square(map);
	*/
	return (0);
}