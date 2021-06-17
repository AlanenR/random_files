
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfile.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:33:08 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 16:53:51 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#define BUF_SIZE 8192

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

char   *ft_read_map(char *file)
{
    int		fd;
    int		ret;
	char	*buf;	

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
	return (buf);
}

int main(int argc, char **argv)
{
	
	char *data;
	/*
	char *fill;
	char *obs;
	char *empt;
	char *map;
	*/

	if (argc < 0)
	ft_error("No file provided");
	
	data = ft_read_map(argv[1]);
	/*
	fill = get_fill(data);
	obs = get_obs(data);
	empt = get_empt(data);
	map = ft_extract_map(data);
	valid_map(map, obs, empt);
	emergency_square(map);
	*/
	return (0);
}