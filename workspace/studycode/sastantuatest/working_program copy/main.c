/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralanen <ralanen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:04:39 by ralanen           #+#    #+#             */
/*   Updated: 2021/06/16 13:23:48 by ralanen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(int argc, char **argv)
{
	char *data;
	char *fill;
	char *obs;
	char *empt;
	char *map;

	if (argc < 0)
	ft_error("No file provided");
	
	data = ft_read_map(argv[1]);
	fill = get_fill(data);
	obs = get_obs(data);
	empt = get_empt(data);
	map = extract_map(data);
	return (0);
}