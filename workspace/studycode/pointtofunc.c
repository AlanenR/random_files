/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointtofunc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 06:17:44 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/11 06:20:23 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

typedef void (*funptr)(char);

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	funptr	f;
	
	f = &ft_putchar;
	f('Z');
	return (0);
}
