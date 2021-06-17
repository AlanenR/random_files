/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_rownum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:34:57 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 11:31:13 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 400

int	ft_atoi(char *str)
{
	int x;
	int result;
	int sign;

	sign = 1;
	result = 0;
	x = 0;
	if (!str)
		return (0);
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			sign = -1;
		x++;
	}
	while (str[x] == '\n' || str[x] == '\r' || str[x] == '\t' || str[x] == '\v'
		|| str[x] == ' ' || str[x] == '\f')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + str[x] - '0';
		x++;
	}
	result = result * sign;
	return (result);
}

char	ft_extract_rownum(char *str, int r)
{

	int i;
	int *rownum;

	rownum = str;

	i = 0;
	r = (r - 3);
	printf("%d this is r value", r);

	while(str[i] <= r)
	{
		rownum[i] = ft_atoi(&str[i]);
		i++;
	}
	rownum[i] = '\0';
	printf("\n\n%i this is the rownum value", *rownum);
	return (rownum);
}


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

/*
char	check_if_obs_or_empty(char c, char o, char e)
{
	if (c == o)
	{
		return ('0');
	}
	if (c == e)
	{
		return ('1');
	}
	else
	{
		ft_error("Not a vald map");
	}
	return(0);
}
*/
void nextfunction(char *str)
{
	int row1;
	int nbrow1;
	int strmap;
	char fill;
	char obs;
	char empt;
	/*char *map;*/
	char *rownum;

	row1 = ft_strlen_line(str);
	fill = str[(row1 - 1)];
	obs = str[(row1 - 2)];
	empt = str[(row1 - 3)];

	nbrow1 = (row1 - 3);
	
	strmap = ft_strlen(str);
	strmap = strmap - row1;

	/*map = ft_extract_map(str, row1);*/
	rownum = ft_extract_rownum(str, row1);
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