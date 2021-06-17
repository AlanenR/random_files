/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EXTRACTMAP.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 06:28:18 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 11:59:02 by ralanen          ###   ########.fr       */
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

char	*ft_extract_map(char *str)
{

	int i;
	char *filled_map;

	filled_map = str;

	i = ft_strlen_line(str);

	while(str[r] != '\0')
	{
		filled_map[i] = str[r];
		i++;
		r++;
	}
	filled_map[i] = '\0';
	return (filled_map);
}

int main(void)
{
	char = *map;
	
	char row12[] = "ejshfaiusldgyoisug ergdsg\nejshfaiusldgyoisug ergdsg\nejshfaiusldgyoisug ergdsg\n\0";
	map = ft_extract_map(row12);
	printf("%s mapstring\n", )
	return (0);
}