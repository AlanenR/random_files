/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:28:06 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 08:28:07 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//Print the grid with solved sudoku
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

//Simple function to print error message
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

//The program starts from here
int		main(int argc, char **argv)
{
	int filled_squares;
	int grid[9][9];

	filled_squares = 0;
	if (argc <= 1)
	{
		ft_error("Error\n");
		return (0);
	}
	//Create the grid and calculate the amount of already filled squares
	filled_squares = ft_create_grid(argv, grid, -1, -1);
	//Check that there is enough filled squares already to form a valid sudoku (Valid sudoku is a sudoku with only one solution)
	if (filled_squares < 17)
	{
		ft_error("Error\n");
		return (0);
	}
	//Print sudoku
	ft_print(grid, 0, 0);
	return (0);
}
