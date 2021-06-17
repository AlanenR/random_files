/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:59:42 by ralanen           #+#    #+#             */
/*   Updated: 2021/05/30 18:04:50 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);
int	rush03st(int x, int y);
int wid;
int len;

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