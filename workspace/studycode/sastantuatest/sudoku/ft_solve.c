/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 08:27:56 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 08:27:58 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*Brute forces the correct answer Brute-force search is a problem solving 
technique which is used to find the solution by systematically enumerating 
all possible candidates. For example, it can be used for pattern matching.
Brute force algorithm
consists of systematically enumerating all possible candidates for the solution 
and checking whether each candidate satisfies the problem's statement.*/
int		ft_solve(int grid[9][9], int x, int y)
{
	int i;

	i = 0;
	//If we are at the last row don't backtrack more
	if (x == 8 && y == 9)
		return (1);
	//If we are on last number of the row, go down to next row
	if (y == 9)
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
