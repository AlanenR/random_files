/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_fill.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:39:10 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 11:45:02 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

char get_fill(char *str)
{
	int row1;
	char fill;

	row1 = ft_strlen_line(str);
	fill = str[(row1 - 1)];
	
	return (fill);
}
