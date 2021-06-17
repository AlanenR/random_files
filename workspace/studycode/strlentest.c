/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlentest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 09:05:50 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/03 09:16:21 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

int main(void)
{
	char what[] = "Sentence";
	int result = ft_strlen(what);
	
	printf("The lenght of what is %d\n", result);
	
	return (0);
}