/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_empt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:10:58 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 17:32:25 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	get_empt(char *str)
{
	int		i;
	int		row1;
	char	empt;

	row1 = ft_strlen_line(str);
	i = (row1 - 3);
	empt = str[i];
	return (empt);
}
