/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:23:48 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/15 19:36:08 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str != '\0')
	{
		str = str + 1;
		l++;
	}
	l++;
	return (l);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * len);
	i = 0;
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char getstr(char *str)
{
	int i;

	char	*str;

	str = (char*)malloc(sizeof(*str) * nbrows);
	i = 0;
	while(str[i] != '\0')
	{
		
		i++;
	}
}