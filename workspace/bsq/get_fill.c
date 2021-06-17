/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:39:10 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 20:35:38 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		get_fill(char *str)
{
	int		row1;
	int		i;
	char	*fill;

	row1 = ft_strlen_line(str);
	i = (row1 - 1);
	fill = &str[i];
	return (*fill);
}
