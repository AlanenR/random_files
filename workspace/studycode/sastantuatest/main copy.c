/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:37:58 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/06/06 09:00:59 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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
	filled_squares = ft_create_grid(argv, grid, i, o);
	if (filled_squares < 17)
	{
		ft_error("Error\n");
		return (0);
	}
	ft_print(grid, 0, 0);
	return (0);
}
