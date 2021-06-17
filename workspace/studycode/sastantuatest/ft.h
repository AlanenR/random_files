/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkarkkai <pkarkkai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 09:00:16 by pkarkkai          #+#    #+#             */
/*   Updated: 2021/06/06 09:00:48 by pkarkkai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_create_grid(char **argv, int grid[9][9], int i, int o);
int		ft_is_valid(int grid[9][9], int x, int y, int nb);
int		ft_solve(int grid[9][9], int x, int y);
int		ft_is_number(char c);
void	ft_putchar(char c);
void	ft_error();
#endif
