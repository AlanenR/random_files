/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 07:37:28 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 18:12:36 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>

char		*ft_read_map(char *file);
void		ft_putchar(char c);
void		ft_putstr(char *str);
int			ft_strlen(char *str);
int			ft_strlen_line(char *str);
char		*ft_extract_map(char *str);
void		ft_error(char *str);
char		get_empt(char *str);
char		get_fill(char *str);
char		get_obs(char *str);
int			valid_map(char *str, char *o, char *e);
int			emergency_square(char *str);
#endif
