/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   howtoread.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 10:38:54 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/13 11:24:08 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdo.h>

int	ft_functions(char *str)
{
	char printRush;
	printRush = 'A';

	char str12*;

	str12 = rush01(x,y);


	
	return(printRush)
}

	int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

int main()
{
	char str1[] = 'ckjbdlaCBÖa'
	char result;

	result=ft_functions(str1);
	printf("%s", result);
	return (0);
} 