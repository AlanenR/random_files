/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_it_rush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:14:10 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/13 14:52:55 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int check_if_any_rush(char *str)
{
	int i;
	
	i = 0;


	if (str[0] != 'o' || str[0] != '/' || str[0] != 'A')
		printf("Not a Rush");
		
	while (str[i] != '\0')
	{
			if(str[i] == 'o' || str[i] == '-' || str[i] == '|' || str[i] == ' ' || str[i] == '/' || str[i] == '\\' || str[i] == '*'
			|| str[i] == 'A' || str[i] == 'B' || str[i] == 'C')
			{
				i++;
			}
			else
			{
				return (0);
			}
	}
	return (1);
}

int main(void)
{
	int o;

	o = check_if_any_rush("AAA");
	
	printf("%d", o);
	if (o == 1)
		printf("Might be a rush\n");
		
	return (0);
}