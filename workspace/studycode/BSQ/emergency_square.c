/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emergency_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 16:02:26 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 16:05:32 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emergency_square.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:25:22 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 16:01:51 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_strlen_line(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

int emergency_square(char *str)
{
    int i;
	int j;
	int cols;
	int rows;

	cols = ft_strlen_line(str);
	rows = ft_strlen(str);
	rows = (rows / cols);
	
    i = 0;
	j = 0;
     
    while(i < rows)
    {
    	j = 0;
    	while(j < cols)
		{
           	printf("x");
           	j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}


int main(void)
{

	char what[] = "gfdgdzgdzgdzgdzgfdzgdzgg\nhfksdhfkshflhfldshdflshfdsl\norgihöodsihgdsöhgahöhdfgaö\norgihöodsihgdsöhgahöhdfgaö\norgihöodsihgdsöhgahöhdfgaö";
	emergency_square(what);
	return (0);
}