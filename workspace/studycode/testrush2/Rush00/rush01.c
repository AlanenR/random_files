/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:05:35 by emerilai          #+#    #+#             */
/*   Updated: 2021/06/12 13:36:07 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	place(int x, char sc, char mc, char sc2)
{
	ft_putchar(sc);
	while ((x - 1) > 1)
	{
		ft_putchar(mc);
		x--;
	}
	if (x > 1)
		ft_putchar(sc2);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		place(x, '/', '*', '\\');
		y--;
		while (y > 1)
		{
			place(x, '*', ' ', '*');
			y--;
		}
		if (y > 0)
			place(x, '\\', '*', '/');
	}
}

void	rush(int a, int b);

int		main(void)
{
	rush(5, 5);
	return (0);
}
