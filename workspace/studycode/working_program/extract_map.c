/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 06:28:18 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 12:01:11 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char	*ft_extract_map(char *str)
{

	int i;
	int r;
	char *filled_map;

	filled_map = str;

	i = 0;
	r = ft_strlen_line(str);

	while(str[r] != '\0')
	{
		filled_map[i] = str[r];
		i++;
		r++;
	}
	filled_map[i] = '\0';
	return (filled_map);
}
