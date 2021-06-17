/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 06:53:30 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/12 07:53:12 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int eval_expr(char *str)
{
	int result;

	double num1;
	double num2;
	char op;

	

	if(op == '+')
	{
		printf("%f", num1 + num2);
	}
	else if(op == '-')
	{
		printf("%f", num1 - num2);
	}
	else if(op == '*')
	{
		printf("%f", num1 * num2);
	}
	else if(op == '/')
	{
		printf("%f", num1 / num2);
	}
	else if(op == '%')
	{
		printf("%f", num1 % num2);
	}
	else
	{
		printf("You're an idiot");
	}


	
	return (result);
}