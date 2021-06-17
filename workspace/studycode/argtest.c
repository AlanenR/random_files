/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argtest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 11:53:37 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/12 11:58:46 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i;
	printf("argc = %d\n", argc);
	printf("Let's see what's in argv[]\n");

	for(i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	
	return (0);
}