/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rows.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:51:51 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 11:51:52 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_empt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:48:05 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 11:50:51 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_obs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:44:13 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 11:47:26 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_strlen_line(char *row1)
{
	int i;

	i = 0;
	while (row1[i] != '\n')
	{
		i++;
	}
	return (i);
}

char get_empt(char *str)
{
	int row1;
	char empt;

	row1 = ft_strlen_line(str);
	empt = str[(row1 - 3)];
	
	return (empt);
}

int main(void)
{
	char fill;
	char row12[] = "ABSDE\nejshfaiusldgyoisug ergdsg\nejshfaiusldgyoisug ergdsg\n\0";
	fill = get_empt(row12);
	printf("%c this is empt", fill);
	return (0);
}