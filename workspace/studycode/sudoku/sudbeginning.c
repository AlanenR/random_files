#include <unistd.h>
#include <stdio.h>

int		ft_is_valid(int grid[9][9], int x, int y, int nb);
void	ft_putchar(char c);
void	ft_error();

int		ft_solve(int grid[9][9], int x, int y)
{
	int i = 1;
	if (x == 8 && y == 9)
		return (1);
	if(y == 9)
	{
		x++;
		y = 0;
	}
	if (grid[x][y] > 0)
		return (ft_solve(grid, x, y + 1));
	while (i <= 9)
	{
		if (ft_is_valid(grid, x, y, i) == 1)
		{
			grid[x][y] = i;
			if (ft_solve(grid, x, y + 1) == 1)
				return (1);
		}
		grid[x][y] = 0;
		i++;
	}
	return (0);
}

int		ft_is_valid(int grid[9][9], int x, int y, int nb)
{
	int i = -1;
	int j = -1;
	int row = x - x % 3;
	int column = y - y % 3;
	while (++i < 9)
	{
		if (grid[x][i] == nb)
			return (0);
	}
	i = -1;
	while (++i < 9)
	{
		if (grid[i][y] == nb)
			return (0);
	}
	i = -1;
	while (++i < 3)
	{
		while (++j < 3)
		{
			if (grid[column + i][row + j] == nb)
				return (0);
		}
		j = 0;
	}
	return (1);
}

void	ft_error()
{
	printf("Error\n");
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i = 0;
	int o = 0;
	//int filled_squares = 0;
	int grid[9][9] = {  { 5, 3, 0, 0, 7, 0, 0, 0, 0},
						{ 6, 0, 0, 1, 9, 5, 0, 0, 0},
						{ 0, 9, 8, 0, 0, 0, 0, 6, 0},
						{ 8, 0, 0, 0, 6, 0, 0, 0, 3},
						{ 4, 0, 0, 8, 0, 3, 0, 0, 1},
						{ 7, 0, 0, 0, 2, 0, 0, 0, 6},
						{ 0, 6, 0, 0, 0, 0, 2, 8, 0},
						{ 0, 0, 0, 4, 1, 9, 0, 0, 5},
						{ 0, 0, 0, 0, 8, 0, 0, 7, 9} };
	if (ft_solve(grid, 0, 0) == 1)
	{
		while (o < 9)
		{
			while (i < 9)
			{
				ft_putchar('0' + grid[o][i]);
				i++;
			}
			ft_putchar('\n');
			i = 0;
			o++;
		}
	}
	else
	{
		ft_error();
	}
	return (0);
}
