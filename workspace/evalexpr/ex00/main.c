/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 07:53:50 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/12 07:54:26 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <stdlib.h>
#include "protos.h"

int main(int ac, char **av)
{
if (ac > 1)
{
ft_putnbr(eval_expr(av[1]));
ft_putchar(’\n’);
}
ret