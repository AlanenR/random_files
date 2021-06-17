/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 07:07:49 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/15 08:57:34 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int solve_map(int grid[rowlenght][totalrows], int x, int y)
{
	int i;

	i = 0;
	/*If we are at the last row don't backtrack more, not needed?
	if (x == 8 && y == 9)
		return (1); */
		
	//If we are on last number of the row, go down to next row
	if (y == rowlenghtn / '\n')
	{
		x++;
		y = 0;
	}
	//Check if number is something else than 0. If it's not go to next square
	if (grid[x][y] > 0)
		return (ft_solve(grid, x, y + 1));
	while (++i <= 9)
	{
		//Check if is not repeating before adding the number to this square
		if (ft_is_valid(grid, x, y, i) == 1)
		{
			grid[x][y] = i;
			//If all squares are filled we can return 1 and print the sudoku
			if (ft_solve(grid, x, y + 1) == 1)
				return (1);
		}
		//Number did not fit here, make it back to 0
		grid[x][y] = 0;
	}
	//Return 0 if there is no solution to this sudoku
	return (0);
}




int main(void)
{
	char str;

	solve_map(map)
	
	return (0);
}