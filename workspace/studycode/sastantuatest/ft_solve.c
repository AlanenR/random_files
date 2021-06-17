/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 08:58:54 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/06/06 09:02:31 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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
