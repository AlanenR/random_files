/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emergency_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:25:22 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 17:21:27 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		emergency_square(char *str)
{
	int		i;
	int		j;
	int		cols;
	int		rows;

	cols = ft_strlen_line(str);
	rows = ft_strlen(str);
	rows = (rows / cols);
	i = 0;
	j = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			ft_putchar('X');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
