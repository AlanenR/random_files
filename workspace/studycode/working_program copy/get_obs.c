/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_obs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:44:13 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 17:33:47 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	get_obs(char *str)
{
	int		i;
	int		row1;
	char	obs;

	row1 = ft_strlen_line(str);
	i = (row - 2);
	obs = str[i];
	return (obs);
}
