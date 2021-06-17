/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argvtest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 09:11:05 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/06 07:54:16 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		main(int argc, char *argv[])
{
	argc = 1;
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
