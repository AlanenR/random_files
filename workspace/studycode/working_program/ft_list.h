/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 07:37:28 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 12:12:55 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int nb);
int			ft_strlen(char *str);
int			ft_strlen_line(char *str);
char		*ft_strcpy(char *dest, char *src);
char		*ft_extract_map(char *str);
void		ft_error(char *str);
char		get_empt(char *str);
char		get_fill(char *str);
char		get_obs(char *str);

#endif
