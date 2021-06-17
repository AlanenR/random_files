/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudokutest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 08:47:17 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/06 10:05:27 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_is_valid(int grid[9][9], int x, int y, int nb);
int		ft_solve(int grid[9][9], int x, int y);
void	ft_putchar(char c);
void	ft_error();

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int grid[9][9], int i, int o)
{
	if (ft_solve(grid, 0, 0) == 1)
	{
		while (o < 9)
		{
			while (i < 9)
			{
				ft_putchar('0' + grid[o][i]);
				ft_putchar(' ');
				i++;
			}
			ft_putchar('\n');
			i = 0;
			o++;
		}
	}
	else
		ft_error("Error\n");
}

int		ft_solve(int grid[9][9], int x, int y)
{
	int i;

	i = 0;
	if (x == 8 && y == 9)
		return (1);
	if (y == 9)
	{
		x++;
		y = 0;
	}
	if (grid[x][y] > 0)
		return (ft_solve(grid, x, y + 1));
	while (++i <= 9)
	{
		if (ft_is_valid(grid, x, y, i) == 1)
		{
			grid[x][y] = i;
			if (ft_solve(grid, x, y + 1) == 1)
				return (1);
		}
		grid[x][y] = 0;
	}
	return (0);
}

int		ft_is_valid(int grid[9][9], int x, int y, int nb)
{
	int i;
	int j;
	int row;
	int column;

	i = -1;
	j = -1;
	row = x - x % 3;
	column = y - y % 3;
	while (++i <= 8)
		if (grid[x][i] == nb)
			return (0);
	i = -1;
	while (++i <= 8)
		if (grid[i][y] == nb)
			return (0);
	i = -1;
	while (++i < 3)
		while (++j < 3)
			if (grid[i + row][j + column] == nb)
				return (0);
	return (1);
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

int		main(int argc, char **argv)
{
	int i;
	int o;
	int filled_squares;
	int grid[9][9];

	i = -1;
	o = -1;
	filled_squares = 0;
	(void)argc;
	if (argc <= 1)
	{
		ft_error("Error\n");
		return (0);
	}
	while (++o < 9)
	{
		while (++i < 9)
		{
			if ((argv[o + 1][i] >= '0' && argv[o + 1][i] <= '9')
				|| argv[o + 1][i] == '.')
			{
				if (argv[o + 1][i] == '.')
					grid[o][i] = 0;
				else
				{
					grid[o][i] = (argv[o + 1][i] - '0');
					filled_squares++;
				}
			}
			else
			{
				ft_error("Error\n");
				return (0);
			}
		}
		i = -1;
	}
	if (filled_squares < 17)
	{
		ft_error("Error\n");
		return (0);
	}
	ft_print(grid, 0, 0);
	return (0);
}
