/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 12:39:46 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 17:38:47 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		valid_map(char *str, char *o, char *e)
{
	int		i;
	int		str_len;
	int		len;

	i = 0;
	len = ft_strlen_line(str);
	str_len = ft_strlen(str);
	if (str_len % len != 0)
	{
		ft_error("invalid map");
		return (0);
	}
	while (str[i] != '\0')
	{
		if (str[i] == o || str[i] == e)
		{
			i++;
		}
		if (str[i] != o || str[i] != e)
		{
			ft_error("Invalid map\n");
			return (0);
		}
	}
	return (0);
}
