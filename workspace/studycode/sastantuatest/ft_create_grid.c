/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 08:58:30 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/06/06 09:02:10 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_create_grid(char **argv, int grid[9][9], int i, int o)
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
