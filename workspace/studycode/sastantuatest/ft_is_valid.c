/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 08:59:35 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/06/06 08:59:46 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
