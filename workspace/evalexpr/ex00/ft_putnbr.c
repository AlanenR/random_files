/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 06:59:11 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/12 06:59:14 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar(char c);

void ft_putnbr(int nb)
{
	if(nb<0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if((nb/10)>0)
	ft_putnbr(nb/10);
	ft_putchar(nb % 10 + 48);
}
