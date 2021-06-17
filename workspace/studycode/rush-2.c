/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 08:33:48 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/12 11:40:01 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_if_any_rush(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i <= argc)
	{
		while(argv[i][j] != '\0')
		{
			if(argv[i][j] == 'o' || argv[i][j] == '-' || argv[i][j] == '|' || argv[i][j] == ' ' || argv[i][j] == '/' || argv[i][j] == '\\' || argv[i][j] == '*'
			|| argv[i][j] == 'A' || argv[i][j] == 'B' || argv[i][j] == 'C')
			{
				j++;
			}
			else
			{
				return (0);
			}
		}
		return (1);
	}
	return(1);
	
}



int main(int argc, char **argv)
{
	if(argc < 2)
	{
		write(1, "Give me an argument\n", 21);
		return(0);
	}
	
	if(!(check_if_any_rush(argc, argv)))
	{
		write(1, "Not a rush\n", 13);
	}
	if(check_if_any_rush(argc, argv))
	{
		write(1, "Might be a rush\n", 16);
	}
	
	return (0);
}