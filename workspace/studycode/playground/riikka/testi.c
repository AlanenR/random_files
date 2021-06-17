/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:18:52 by ralanen           #+#    #+#             */
/*   Updated: 2021/05/30 18:15:34 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

nt	rush03st(int x, int y)
{
	int w;
	int l;

	w = 0;
	l = 0;
	if ((x < 1) || (y < 1))
		return (0);
	while (++l <= y)
	{
		while (++w <= x)
		{
			if ((w == 1) && (l == 1 || l == y))
				ft_putchar('A');
			else if ((w == x) && (l == 1 || l == y))
				ft_putchar('C');
			else if (((1 < l < y) && (w == 1 || w == x)) || ((1 < w < x) && (l == 1 || l == y)))
				ft_putchar('B');
			else if ((1 < l < y) && (1 < w < x))
				ft_putchar(' ');
		}
		ft_putchar('\n');
		w = 0;
	}
	return (0);
}

int	main(void)
{
	rush03st(5, 3);
	ft_putchar('\n');
	rush03st(5, 1);
	ft_putchar('\n');
	rush03st(1, 1);
	ft_putchar('\n');
	rush03st(1, 5);
	ft_putchar('\n');
	rush03st(4, 4);
	ft_putchar('\n');
	rush03st(0, 1);
	ft_putchar('\n');
	rush03st(1, 0);
	ft_putchar('\n');
	return (0);
}
