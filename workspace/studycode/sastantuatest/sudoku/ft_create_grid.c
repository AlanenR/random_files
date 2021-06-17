/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:27:32 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 13:34:31 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

//Creates the integer array from char argv and returns the amount of filled squares.
int		ft_create_grid(char *str)
{
	int filled_squares;

	filled_squares = 0;
	while (++o < 9)
	{
		while (++i < 9)
		{
			if (ft_is_number(argv[o + 1][i]) == 1)
			{
				if (argv[o + 1][i] == '.')
					grid[o][i] = 0;
				else
				{
					//Set int grids value
					grid[o][i] = (argv[o + 1][i] - '0');
					filled_squares++;
				}
			}
			else
				return (0);
		}
		i = -1;
	}
	return (filled_squares);
}

//Check if is number or '.'
int		ft_is_number(char c)
{
	if ((c >= '0' && c <= '9') || c == '.')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
