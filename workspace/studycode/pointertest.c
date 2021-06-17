/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointertest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 08:30:51 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/03 08:51:09 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char grade[] = "Anssi perkele";
	char *pgrade = grade;

	ft_putstr(pgrade);
	ft_putchar('\n');
	return (0);
}
