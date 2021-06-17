/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaptest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 09:18:29 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/03 09:27:12 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(char *a, char *b)
{
	int container;

	container = *a;
	*a = *b;
	*b = container;
}

int main(void)
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 0;
	b = 1;
	pa = &a;
	pb = &b;

	printf("a is %c and b is %c", a, b);
	ft_swap(a, b);
	printf("a is %c and b is %c", a, b);
	return (0);
}